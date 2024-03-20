#!/usr/bin/env bash
autoreconf --install --force
./configure
automake
make
