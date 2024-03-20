# REV01: Wed 20 Mar 2024 22:00
# START: Thu 14 Mar 2024 11:00

touch config.h.in
aclocal
autoconf
automake --add-missing
./configure
make
echo "prog1 ===="
./prog1
echo "prog2 ===="
./prog2
echo "touch prog1.c ===="
touch prog1.c
make
echo "touch prog2.c ===="
touch prog2.c
make
echo "touch share.c ===="
touch share.c
make
echo "touch share.h ===="
touch share.h
make

