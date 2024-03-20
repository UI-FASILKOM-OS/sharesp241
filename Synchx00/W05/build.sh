# START: Thu 14 Mar 2024 13:11

touch config.h.in
aclocal
autoconf
automake --add-missing
./configure
make
./prog1
./prog2
