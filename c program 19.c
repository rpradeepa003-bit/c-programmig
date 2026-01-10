#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the limit N: ");
    scanf("%d", &N);

    printf("Odd numbers up to %d are: ", N);
    
    for (i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}