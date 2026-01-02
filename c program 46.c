#include <stdio.h>

int main() {
    char s[] = "hello";
    int i;
    int length = 0;

    for (i = 0; s[i] != '\0'; i++) {
        length++;
    }

    printf("Input: \"%s\"\n", s);
    printf("Output: %d\n\n", length);

    char s2[] = "programming";
    length = 0;

    for (i = 0; s2[i] != '\0'; i++) {
        length++;
    }
    
    printf("Input: \"%s\"\n", s2);
    printf("Output: %d\n", length);

    return 0;
}