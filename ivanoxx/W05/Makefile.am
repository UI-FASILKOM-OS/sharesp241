# REV02: Wed 13 Mar 2024 10:00
# START: Sat 11 Mar 2023 22:00
#        1         2         3         4         5         6         7
# 34567890123456789012345678901234567890123456789012345678901234567890
# Please complete this file.

# Makefile.am

bin_PROGRAMS = prog1 prog2

# Source files for each target
prog1_SOURCES = prog1.c
prog2_SOURCES = prog2.c share.c

# Link prog1 and prog2 with libshare.a
prog1_LDADD = libshare.a
prog2_LDADD = libshare.a

# Specify the libraries to link against
LDLIBS = -lm

# Additional flags for the compiler
AM_CFLAGS = -Wall -std=gnu18

clean-local:
	@rm config.status configure config.log
	@rm Makefile
	@rm -r autom4te.cache/
	@rm aclocal.m4
	@rm compile install-sh missing Makefile.in
