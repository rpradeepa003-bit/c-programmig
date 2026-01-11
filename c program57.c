#include <stdio.h>

long long int factorial(int digit) {
    long long int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder;
    long long int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a Strong number", originalNum);
    } else {
        printf("%d is not a Strong number", originalNum);
    }

    return 0;
}