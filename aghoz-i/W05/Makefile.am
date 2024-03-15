# REV03: Wed 13 Mar 2024 10:46
# REV02: Wed 13 Mar 2024 10:00
# START: Sat 11 Mar 2023 22:00
#        1         2         3         4         5         6         7
# 34567890123456789012345678901234567890123456789012345678901234567890
# Please complete this file.

AUTOMAKE_OPTIONS = foreign

noinst_LIBRARIES = libshare.a
libshare_a_SOURCES = share.c share.h

bin_PROGRAMS = prog1 prog2
prog1_SOURCES = prog1.c share.h
prog2_SOURCES = prog2.c share.h

AM_CFLAGS = -std=gnu18

prog1_LDADD = share.o
prog2_LDADD = share.o

SUPERCLEAN:
	rm -f config.h config.log config.status libtool stamp-h1
	rm -f aclocal.m4 compile configure depcomp install-sh missing Makefile.in Makefile
	rm -f config.h.in configure~ prog1 prog2 share libshare.a
	rm -f prog1.o prog2.o share.o
	rm -rf .deps autom4te.cache

.PHONY: SUPERCLEAN
