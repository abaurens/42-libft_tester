#!/bin/bash

LIB_PATH="../libft"

ln -s $LIB_PATH ./libft
make re
make clean
./lib_tester

git clone "https://github.com/jgigault/42FileChecker.git" > /dev/null
git clone "https://github.com/jtoty/Libftest.git" > /dev/null

chmod 755 ./42FileChecker/42FileChecker.sh
#./42FileChecker/42FileChecker.sh --project "libft"

make fclean > /dev/null
rm ./libft
#rm -rf "42FileChecker"
#rm -rf "Libftest"
