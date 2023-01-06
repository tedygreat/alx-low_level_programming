#!/bin/bash
gcc -well -wextra -werror -pedantic -c *.c
ar rc liball.a *.o
