#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }

    return 0;
}