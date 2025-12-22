#include <stdio.h>

int main() {
    int num1, num2, result;
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 | num2;
    printf("Output: %d\n", result);

    return 0;
}