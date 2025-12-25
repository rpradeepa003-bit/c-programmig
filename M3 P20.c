#include <stdio.h>

int main() {
    int experience;
    int bonus;
    scanf("%d", &experience);
    if (experience >= 5) {
        bonus = 5000;
    } else {
        bonus = 2000;
    }
    printf("%d\n", bonus);

    return 0;
}