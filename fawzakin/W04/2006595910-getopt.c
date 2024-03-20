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

#ifdef __GNUC__
__attribute__((noreturn))
#endif

static void             /* Print "usage" message and exit */
usageError(void)
{
    fprintf(stderr, "ERROR\n");
    exit(EXIT_FAILURE);
}

int
main(int argc, char *argv[])
{
    int opt, xfnd, beauty;
    char *pstr;
    char *name;

    xfnd = 0;
    beauty = 0;
    pstr = NULL;
    name = NULL;

    while ((opt = getopt(argc, argv, "bn:p:x")) != -1) {
        switch (opt) {
        case 'b': beauty++; break; 
        case 'n': name = optarg; break;
        case 'p': pstr = optarg; break;
        case 'x': xfnd++; break;
        case ':': usageError();
        case '?': usageError();
        default:  usageError();
        }
    }

    if (argc>=1)
    {
        if (optind < argc)
        {
            printf("Hello %s!\n", argv[optind]);
        }
        else
        {
            printf("Hello!\n");
        }

    }
    if (beauty >= 1)
        printf("It is a beautiful day!\n");
    if (name != NULL)
        printf("Is your name %s?\n", name);
    if (xfnd != 0)
        printf("-x was specified (count=%d)\n", xfnd);
    if (pstr != NULL)
        printf("-p was specified with the value \"%s\"\n", pstr);
    exit(EXIT_SUCCESS);
}

