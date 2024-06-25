#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "testB.h"



int test1() {
  int i;
  int *p=&i;
  return *p;      //   error - expect to find. making sure analysis works 
}

void test2_1 (void **ptr, int sz) {

   *ptr = malloc(sz);

}


void test2_2() {

   void *block;

   test2_1(&block,1000);

   test2_3(block);               // test2_3() defined  in testB.c   - leaks block  
}

void test2_4() {

  void *block;

   test2_1(&block,1000);

   test2_5(block);               
}                             // test2_5() defined  in testB.c.  if reports leak it's a FP


void test3() {
  void *block;

   test2_1(&block,1000);
}                           // returns without freeing  - expected  error


void test4() {

     int val;
     int arr[5]= {0,1,2,3,4};

     val = test4_1(); 
     printf("array val is %d", arr[val]);    // access out of bounds 
}


void test5() {

   int *ptr = 0;

   test5_1(ptr);
}

typedef struct some_struct{int a;}some_struct;

void test6() {

    // malloc returns NULL on error
    some_struct *x = (some_struct*) malloc(sizeof(*x));
    memset(x, 0, sizeof(*x));              // ERROR: memset dereferences possibly null pointer x
    free(x);
}



