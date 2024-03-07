#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#ifdef __GNUC__
__attribute__((noreturn))
#endif

static void usageError(void) {
  fprintf(stderr, "ERROR\n");
  exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
  int opt;
  char *name = NULL;
  int beautiful = 0;
  int has_name_arg = 0; // Flag to track if -n had an argument (from getopt)

  // Check for positional argument before getopt
  if (argc > 1) {
    printf("Hello %s!\n", argv[1]);  // Use first argument for initial greeting
  } else {
    printf("Hello!\n");
  }

  while ((opt = getopt(argc, argv, "n:b")) != -1) {
    switch (opt) {
      case 'n':
        if (optind < argc) { // Check if there's an argument after -n (from getopt)
          name = argv[optind];
          has_name_arg = 1;
        }
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

  // Print greeting based on name (if not handled by getopt)
  if (!has_name_arg && argc > 2 && strcmp(argv[2], "-n") == 0 && argc > 3) {
    // Check for -n after a positional argument (not handled by getopt)
    name = argv[3];
  }

  // Print greeting based on name (if present)
  if (name != NULL) {
    printf("Is your name %s?\n", name);
  }

  // Print "It is a beautiful day!" based on the flag (same as original)
  if (beautiful)
    printf("It is a beautiful day!\n");

  return 0;
}

