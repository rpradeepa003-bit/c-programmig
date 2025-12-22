#include <stdio.h>

int main() {
    int N;
    printf("Enter a single integer N: ");
    if (scanf("%d", &N) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (N & 1) {
        printf("Odd\n");
    } else {
        printf("Even\n");
    }

    return 0;
}