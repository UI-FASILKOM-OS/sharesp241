#include <stdio.h>

// https://github.com/mkirchner/stutter/blob/main/src/djb2.c
unsigned long djb2(char *str) {
    unsigned char *s = (unsigned char *) str;
    unsigned long hash = 5381;
    int c;

    while ((c = *s++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main() {
    const char *input = "The DJBX33A result with C and Bash should be the same";
    int result = djb2(input);

    printf("DJBX33A hash result: %u\n", result);

    return 0;
}
