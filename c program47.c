#include <stdio.h>

void string_copy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}

int main() {
    char str1[] = "hello";
    char dest1[20]; 
    string_copy(dest1, str1);

    char str2[] = "Cprogram";
    char dest2[20];
    string_copy(dest2, str2);

    printf("Input: \"%s\" Output: %s\n", str1, dest1);
    printf("Input: \"%s\" Output: %s\n", str2, dest2);

    return 0;
}