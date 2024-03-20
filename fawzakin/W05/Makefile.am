# REV02: Wed 13 Mar 2024 10:00
# START: Sat 11 Mar 2023 22:00
#        1         2         3         4         5         6         7
# 34567890123456789012345678901234567890123456789012345678901234567890
# Please complete this file.
# I have legit no idea how any of this works but I did it!
AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = prog1 prog2
prog1_SOURCES = prog1.c share.c share.h
prog2_SOURCES = prog2.c share.c share.h
CFLAGS="-std=gnu18"

clean:
	@rm config.status configure config.log Makefile aclocal.m4 compile install-sh missing Makefile.in depcomp
	@rm -rf autom4te.cache
	@rm prog1 prog2 prog1.o prog2.o share.o
