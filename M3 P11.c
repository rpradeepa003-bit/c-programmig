#include <stdio.h>
int main() {
    int N;
    printf("Input: ");
    if (scanf("%d", &N) == 1) {
        if (N >= -9 && N <= 9) {
            printf("Single Digit\n");
        } else {
            printf("Not Single Digit\n");
        }
    }
    return 0;
}