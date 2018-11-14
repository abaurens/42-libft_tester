#!/bin/bash

LIB_PATH="../libft"

ln -s $LIB_PATH ./libft
make re
make clean
./lib_tester
make fclean > /dev/null
rm ./libft
