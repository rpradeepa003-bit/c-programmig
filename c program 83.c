#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHAR 256

bool hasDuplicate(char *str) {
    bool seen[MAX_CHAR] = {false};
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (seen[(int)str[i]]) {
            return true;
        }
        seen[(int)str[i]] = true;
    }
    return false;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (hasDuplicate(str)) {
        printf("The string contains duplicate characters.\\n");
    } else {
        printf("The string does not contain duplicate characters.\\n");
    }
    return 0;
}