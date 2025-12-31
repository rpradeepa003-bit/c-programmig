#include <stdio.h>
    int main() {
    int N, i;
    printf("Enter the upper limit N: ");
    scanf("%d", &N);
    printf("Even numbers up to %d are: ", N);
    for (i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}