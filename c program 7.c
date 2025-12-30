#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 5 == 0) {
        printf("Output: Divisible\n");
    } else {
        printf("Output: Not Divisible\n");
    }

    return 0;
}