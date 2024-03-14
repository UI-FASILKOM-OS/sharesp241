AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = prog1 prog2

# Define cleaning targets
clean-CXXFLAGS = $(AM_CXXFLAGS) -MMD

CLEANFILES = compile config.log config.status config.h install-sh missing aclocal.m4 autom4te.cache depcomp

prog1_SOURCES = prog1.c share.h
prog2_SOURCES = prog2.c share.h
AM_CFLAGS = -std=gnu18

distclean-vpath : $(srcdir)
distclean-recursive := $(CLEANFILES)
MAINTAINERCLEANFILES = Makefile.in aclocal.m4 configure.ac
EXTRA_DIST = $(srcdir)/000-README.txt $(srcdir)/progress.txt
