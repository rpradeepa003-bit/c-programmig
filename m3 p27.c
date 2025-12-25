#include <stdio.h>
int main() {
    int age, salary;
    printf("Enter age and salary: ");
    scanf("%d %d", &age, &salary);
    if (age >= 25 && salary >= 30000) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }
    return 0;
}