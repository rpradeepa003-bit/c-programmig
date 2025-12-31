#include <stdio.h>
    int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    printf("Input: %c --> Output: Alphabet\n", ch);
    } else {
    printf("Input: %c --> Output: Not Alphabet\n", ch);
    }
    return 0;
}