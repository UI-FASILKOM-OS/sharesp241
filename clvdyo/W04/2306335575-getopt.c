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
    int opt;
    char *pstr;
    int is_b_specified = 0;

    pstr = NULL;

    while ((opt = getopt(argc, argv, ":n:b")) != -1) {
        switch (opt) {
        case 'n': pstr = optarg;        break;
        case 'b': is_b_specified = 1;   break;
        case ':': usageError();
        case '?': usageError();
        default:  usageError();
        }
    }

    if (optind == argc || (optind == argc - 1 && is_b_specified)) {
        printf("Hello!\n");
    } else {
        if (optind < argc) {
            printf("Hello %s!\n", argv[optind]);
        }
        if (is_b_specified) {
            printf("It is a beautiful day!\n");
        }
        if (pstr != NULL) {
            printf("Is your name %s?\n", pstr);
        }
    }

    exit(EXIT_SUCCESS);
}

