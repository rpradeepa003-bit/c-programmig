#include <stdio.h>

int main() {
    int A, B, C;
    A = 3; B = 9; C = 5; 

    if (A >= B && A >= C) {
        printf("%d\n", A);
    } else if (B >= A && B >= C) {
        printf("%d\n", B);
    } else {
        printf("%d\n", C);
    }

    return 0;
}