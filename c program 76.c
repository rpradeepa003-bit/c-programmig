#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char username[100];
    printf("Enter a username: ");
    scanf("%s", username);

    bool isValid = true;
    int len = strlen(username);

    if (len < 6 || len > 12) {
        isValid = false;
    } else if (isdigit(username[0])) {
        isValid = false;
    } else {
        for (int i = 0; i < len; i++) {
            if (!islower(username[i]) && !isdigit(username[i])) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        printf("Valid username\n");
    } else {
        printf("Invalid username\n");
    }

    return 0;
}