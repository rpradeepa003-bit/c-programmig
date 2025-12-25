#include <stdio.h>

int main() {
    int age;
    printf("Input the age of the candidate:1");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}