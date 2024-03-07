/*************************************************************************\
*                  Copyright (C) Michael Kerrisk, 2022.                   *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
* CBKADAL: Modified for ASSIGNMENT WEEK05                                 *
\*************************************************************************/

// Listing B-1
// t_getopt.c: Demonstrate the use of getopt(3) to parse command-line options.

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

#ifdef __GNUC__
__attribute__((noreturn))
#endif

static void             /* Print "usage" message and exit */
usageError(void)
{
    fprintf(stderr, "ERROR\n");
    exit(EXIT_FAILURE);
}

static struct option long_options[] = {
	{"beautiful", 0, NULL, 'b'},
	{"name", 1, NULL, 'n'},
	{NULL, 0, NULL, 0}
};

int
main(int argc, char *argv[])
{
    int opt, xfnd;
    char *pstr;

    xfnd = 0;
    pstr = NULL;

    while ((opt = getopt_long(argc, argv, "bn:", long_options, NULL)) != -1) {
        switch (opt) {
        case 'b': xfnd++;        break;
        case 'n': pstr = optarg;	break;
        case ':': usageError();
        case '?': usageError();
        default:  usageError();
        }
    }

    if (optind < argc)
        printf("Hello %s!\n", argv[optind]);
    else
        printf("Hello!\n");
    if (xfnd != 0)
        printf("It is a beautiful day!\n");
    if (pstr != NULL)
        printf("Is your name %s?\n", pstr);
    exit(EXIT_SUCCESS);
}

