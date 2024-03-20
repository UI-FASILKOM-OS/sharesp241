# REV01: Wed 20 Mar 2024 22:00
# START: Thu 14 Mar 2024 11:00

touch config.h.in
aclocal
autoconf
automake --add-missing
./configure
make
sleep 2; echo "prog1 ===="
./prog1
sleep 2; echo "prog2 ===="
./prog2
sleep 2; echo "touch prog1.c ===="
touch prog1.c
make
sleep 2; echo "touch prog2.c ===="
touch prog2.c
make
sleep 2; echo "touch share.c ===="
touch share.c
make
sleep 2; echo "touch share.h ===="
touch share.h
make

