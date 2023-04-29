#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -r -c liball.a *.o
ranlib liball.a
rm -- *.o
