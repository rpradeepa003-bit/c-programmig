#include <stdio.h>
int main() {
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age < 13) {
        printf("Child\n");
    } else if (age < 20) {
        printf("Teen\n");
    } else {
        printf("Adult\n");
    }

    return 0;
}