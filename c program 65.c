#include <stdio.h>

int main() {
    long long decimal_num, remainder, base = 1, binary_num = 0;
    
    printf("Enter a decimal integer: ");
    scanf("%lld", &decimal_num);
    
    while (decimal_num > 0) {
        remainder = decimal_num % 2;
        binary_num = binary_num + remainder * base;
        decimal_num = decimal_num / 2;
        base = base * 10;
    }
    
    printf("Its binary equivalent is: %lld\n", binary_num);
    
    return 0;
}