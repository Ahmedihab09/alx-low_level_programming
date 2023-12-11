#!/bin/bash

c_files=$(find . -maxdepth 1 -type f -name "*.c")

gcc -shared -fPIC -o liball.so $c_files
