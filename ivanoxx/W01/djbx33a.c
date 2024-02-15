#include <stdio.h>

unsigned long djbx33a(char *str)
{
    unsigned char *s = (unsigned char *) str;
    unsigned long hash = 5381;
    int c;

    while ((c = *s++)) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main() {
    char *str = "The DJBX33A result with C and Bash should be the same";
    unsigned long hash = djbx33a(str);
    printf("Hash: %u\n", hash);
    return 0;
}
