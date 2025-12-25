#include <stdio.h>

int main() {
    int N;
    N = -4; 

    if (N > 0) {
        printf("Positive\n");
    } else if (N < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}