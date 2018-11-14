#!/bin/bash

LIB_SRC="../libft"
CUR_DIR=`pwd`
LIB_PATH="$CUR_DIR/libft"

cp -rf "$LIB_SRC" "$LIB_PATH"
make re
make clean
./lib_tester
read -p "press enter to continue."

git clone "https://github.com/jgigault/42FileChecker.git"
chmod 755 ./42FileChecker/42FileChecker.sh
./42FileChecker/42FileChecker.sh --path "$LIB_PATH" --project "libft"
read -p "press enter to continue."

git clone "https://github.com/jtoty/Libftest.git"
chmod 755 ./Libftest/grademe.sh
cp my_config.sh ./Libftest/my_config.sh
./Libftest/grademe.sh

make fclean > /dev/null
rm -rf "42FileChecker"
rm -rf "Libftest"
rm -rf ./libft
