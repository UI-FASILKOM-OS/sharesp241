# REV05: Wed 14 Mar 2024 14:27
# START: Sat 11 Mar 2023 22:00
#        1         2         3         4         5         6         7
# 34567890123456789012345678901234567890123456789012345678901234567890
# Please complete this file.

# Makefile.am

# Define the sources for the executable
bin_PROGRAMS = prog1 prog2

# Source files for each target
prog1_SOURCES = prog1.c
prog2_SOURCES = prog2.c

# Additional flags for the compiler
AM_CFLAGS = -Wall -std=gnu18 -Wno-main share.c

clean-local:
	@rm config.status configure config.log
	@rm Makefile
	@rm -r autom4te.cache/
	@rm aclocal.m4
	@rm compile install-sh missing Makefile.in
