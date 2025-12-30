#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 11 == 0) {
        printf("Output: Yes\n");
    } else {
        printf("Output: No\n");
    }

    return 0;
}