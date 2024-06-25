#include <stdlib.h>
#include <stdio.h>
#include "testB.h"

void test2_3( void *ptr) {
    printf("here");
    // free(ptr);     //free is commented out.  resource leak  
}

void test2_5( void *ptr) {
    printf("here");
    free(ptr);     //block is freed, no leak                                
}

int test4_1() {

   return 5;
}

void test5_1(int *ptr) {
   int arr[5] = {5,6,7,8,9};

   printf("arr val is %d", arr[*ptr]);
}
