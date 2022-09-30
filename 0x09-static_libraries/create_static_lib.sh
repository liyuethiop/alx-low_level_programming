#!/bin/bash
gcc -Wall -padantic -Werror -Wextra -c *.c
ar -cr liball.a *.o
