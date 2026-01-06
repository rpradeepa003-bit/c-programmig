#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        str[i] = toupper(str[i]); 
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}