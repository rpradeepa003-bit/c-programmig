#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 35) {
        printf("Pass\n");
    } else if (marks >= 30) {
        printf("Grace Pass\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}