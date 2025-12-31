#include <stdio.h>

int main() {
    int N, i;

    printf("Input: ");
    scanf("%d", &N);

    printf("Output: ");
    for (i = 1; i <= N; i++) {
        printf("%d", i);
    }
    printf("\n");
    return 0;
}