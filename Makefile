all:  clean build 

build:
	clang -c testA.c
	clang -c testB.c

clean:
	rm -rf *.o  idir


coverityAnalyze:
	cov-build --dir idir clang -c testA.c testB.c
	cov-analyze --dir idir --all -co NULL_RETURNS:stat_threshold:0
	cov-format-errors --dir idir --html-output html
	open html/index.html


