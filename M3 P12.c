#include <stdio.h>
int main() {
    int salary;
    printf("Enter salary: ");
    scanf("%d", &salary);
    if (salary >= 20000) {
        salary += 2000;
    } else {
        salary += 1000;
    }
    printf("Final salary: %d\n", salary);
    return 0;
}