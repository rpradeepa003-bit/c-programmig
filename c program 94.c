#include <stdio.h>

int calculateBonus(int years) {

    if (years < 2)
        return 1000;
    else if (years <= 5)
        return 3000;
    else
        return 5000;
}

int main() {
    int years, bonus;

    printf("Enter years of experience: ");
    scanf("%d", &years);

    bonus = calculateBonus(years);

    printf("Bonus Amount = Rs.%d", bonus);

    return 0;
}