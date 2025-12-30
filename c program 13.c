#include <stdio.h>

int main() {
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Eligible\\n");
    } else {
        printf("Not Eligible\\n");
    }

    return 0;
}