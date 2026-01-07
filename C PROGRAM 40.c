#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Input: ");
    if (scanf("%d |", &n) != 1) return 1;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num > 0) {
            count++;
        }
    }

    printf("Output: %d\n", count);
    return 0;
}