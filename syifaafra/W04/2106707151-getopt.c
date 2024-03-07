/*************************************************************************\
*         Copyright (C) Michael Kerrisk, 2022.         *
*                                    *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the *
* Free Software Foundation, either version 3 or (at your option) any   *
* later version. This program is distributed without any warranty. See *
* the file COPYING.gpl-v3 for details.                  *
* CBKADAL: Modified for ASSIGNMENT WEEK05                *
\*************************************************************************/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifdef __GNUC__
__attribute__((noreturn))
#endif

static void usageError(void) {
  fprintf(stderr, "ERROR\n");
  exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
  int opt, beautiful = 0;
  char *name = NULL;

  while ((opt = getopt(argc, argv, "bn:")) != -1) {
    switch (opt) {
      case 'n':
        name = optarg;
        break;
      case 'b':
        beautiful = 1;
        break;
      case ':':
      case '?':
      default:
        usageError();
    }
  }

  // Print greeting using first positional argument (if present)
  if (optind < argc) {
    printf("Hello %s!\n", argv[optind]);
  } else {
    printf("Hello!\n");
  }

  // Print messages based on flags and argument
  if (beautiful)
    printf("It is a beautiful day!\n");
  if (name != NULL)
    printf("Is your name %s?\n", name);

  printf("\n");
  exit(EXIT_SUCCESS);
}

