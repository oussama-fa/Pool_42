#!/bin/bash

rm -f libft.a
gcc -Wall -Wextra -Werror -c $(find . -name "*.c")
ar -rc libft.a *.o
rm -f *.o
