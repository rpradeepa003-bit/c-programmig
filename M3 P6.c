#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (N % 5 == 0) {
        printf("Yes\\n");
    } else {
        printf("No\\n");
    }

    return 0;
}