# test_interprocedural
sample code to test interprocedural SAST

simple C code examples to show inter-file, inter-procedural SAST analysis is required to identify ranges of coding problems.

Coverity operates in this way, while most other tools do single file analysis or they operate on a small set, not the full code base.

Requirements to test:   

Install Coverity analysis tools, and add to $PATH:
  $ export PATH=<coverity_analysis install>/bin:$PATH

Build:
  $ make

Results will be in ./html directory:
  $ open ./html/index.html
