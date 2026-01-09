#include <stdio.h>

int main() {
    int N, i, j, isPrime, sum = 0;
    printf("Enter the upper limit N: ");
    scanf("%d", &N);
    for (i = 2; i <= N; i++) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1) {
            sum += i;
        }
    }
    printf("The sum of all prime numbers up to %d is: %d\n", N, sum);

    return 0;
}