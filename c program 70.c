#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}; 
    int i;

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1; 
    }

    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:");

    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {

            printf("'%c' : %d\n", (char)i, count[i]);
        }
    }

    return 0;
}