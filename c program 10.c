#include <stdio.h>
int main() {
    int marks;
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Output: Grade A\\n");
    } else if (marks >= 40) {
        printf("Output: Grade C\\n");
    } 
    return 0;
}