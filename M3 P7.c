#include <stdio.h>

int main() {
    int year;
    year = 2024; 

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not Leap Year\n");
    }

    return 0;
}