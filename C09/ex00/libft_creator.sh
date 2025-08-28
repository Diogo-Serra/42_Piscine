#!/bin/sh

cc -c *.c
ar rc libft.a *.o
ranlib libft.a
rm -f *.o
