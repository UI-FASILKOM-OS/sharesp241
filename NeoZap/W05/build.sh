#!/bin/sh

autoreconf --install
./configure
make
./prog1
./prog2

