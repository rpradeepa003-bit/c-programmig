#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MIN_LENGTH 8
#define MAX_LENGTH 100

int main() {
    char password[MAX_LENGTH];
    int hasUpper = 0, hasLower = 0, hasDigit = 0;
    int length, i;

    printf("Enter a password: ");
    fgets(password, MAX_LENGTH, stdin);
    length = strlen(password);
    if (length > 0 && password[length - 1] == '\n') {
        password[length - 1] = '\0';
        length--;
    }

    if (length < MIN_LENGTH) {
        printf("Password is weak: length is less than 8 characters.\n");
        return 0;
    }

    for (i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
    }

    if (hasUpper && hasLower && hasDigit) {
        printf("Password is strong.\n");
    } else {
        printf("Password is weak: missing required characters.\n");
    }

    return 0;
}