#!/bin/bash
gcc -o cisfun -xc - <<<'#include <stdio.h>\nint main(){puts("Programming is like building a multilingual puzzle,");return 0;}';./cisfun;rm cisfun
