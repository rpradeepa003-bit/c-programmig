#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Output: Uppercase\\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Output: Lowercase\\n");
    } else {
        printf("Output: Not an alphabet\\n");
    }
    return 0;
}