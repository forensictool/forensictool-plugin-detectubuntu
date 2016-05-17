#!/bin/bash

wget -O src/coex.h https://raw.githubusercontent.com/tusur-coex/coex/master/sources/include/coex.h

rm Makefile
rm -rf tmp
rm -rf bin

qmake && make
