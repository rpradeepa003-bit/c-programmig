#include <stdio.h>

int main() {
    int password;
    int correct_password = 1234;
    scanf("%d", &password);
    if (password == correct_password) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}