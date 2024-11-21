# test_interprocedural
sample code to test interprocedural SAST

simple C code examples to show inter-file, inter-procedural SAST analysis is required to identify ranges of coding problems.

Coverity generates the whole Abstract Syntax Tree (AST) for the code base prior to running full analysis, while most other tools do single file analysis or they operate on a small set, not the full code base.   Often, contributing events to issues can span files.  Unless analysis is performed on the whole codebase AST, serious crash causing issues could be missed.

## Requirements to test:   

Install Clang compiler

Install Coverity analysis tools, and add to  $PATH:
>  $ export PATH=<coverity_analysis install>/bin:$PATH

## Build:
This will run the Coverity analysis on the source files:
>  $ make coverityAnalyze

## Results will be in ./html directory:
>  $ open ./html/index.html
