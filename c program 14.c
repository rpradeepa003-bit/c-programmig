#include <stdio.h>
    int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0 || number % 3 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}