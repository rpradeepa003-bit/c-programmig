#include <stdio.h>
int main() {
    int number;
    if (scanf("%d", &number) != 1) {
        return 1; 
    }
    if (number < 0) {
        printf("Negative\n");
    } else if (number % 2 == 0) {
        printf("Positive Even\n");
    } else {
        printf("Positive Odd\n");
    }
    return 0;
}