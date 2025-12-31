#include <stdio.h>
    int main() {
    int N, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    for (i = 1; i <= N; ++i) {
    sum += i;
    }
    printf("Output: %d\n", sum);
    return 0;
}