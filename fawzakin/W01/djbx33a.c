#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "The DJBX33A result with C and Bash should be the same";
    int hash_num = 5381;
    int len = strlen(text);
    for (int i = 0; text[i] != '\0'; i++) {
        int ascii = (int)text[i];
        hash_num = hash_num * 33 + ascii;
    }
    printf("Hash value of '%s' using DJBX33A is %d", text, hash_num);
    return 0;
}
