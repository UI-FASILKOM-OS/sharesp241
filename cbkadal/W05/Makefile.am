# REV02: Wed 13 Mar 2024 10:00
# START: Sat 11 Mar 2023 22:00
#        1         2         3         4         5         6         7
# 34567890123456789012345678901234567890123456789012345678901234567890
# Please complete this file.

bin_PROGRAMS  = prog1 prog2
prog1_SOURCES = prog1.c share.c
prog2_SOURCES = prog2.c share.c
AM_CFLAGS     = -std=gnu18

SUPERCLEANFILES =      \
	aclocal.m4     \
	autom4te.cache \
	config.status  \
	config.h.in    \
	config.log     \
	configure      \
	compile        \
        config.h       \
	.deps          \
	depcomp        \
	install-sh     \
	Makefile       \
	Makefile.in    \
	missing        \
	stamp-h1       \
        *~

.PHONY: SUPERCLEAN 
SUPERCLEAN: clean
	rm -rf $(SUPERCLEANFILES)

