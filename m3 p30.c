#include <stdio.h>
int main(){
    int salary;
    float final_salary;
    printf("Enter the salary: ");
    scanf("%d", &salary);
    if (salary >= 50000) {
        // Apply 10% tax (0.10 * salary)
        final_salary = salary - (0.10 * salary);
    } else {
        final_salary = salary;
    }
    printf("Final salary after tax: %.2f\n", final_salary); 
    return 0;
}