#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;   // Not Prime

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;   // Not Prime
    }

    return 1;   // Prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}