#include <stdio.h>
int main() {
    float bill, final_bill, discount_rate;
    printf("Enter the bill amount: ");
    scanf("%f", &bill);
    if (bill >= 5000) {
        discount_rate = 0.10; // 10%
    } else {
        discount_rate = 0.05; // 5%
    }
    final_bill = bill * (1.0 - discount_rate);
    printf("Final bill amount: %.2f\n", final_bill);
    return 0;
}