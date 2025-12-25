#include <stdio.h>

int main() {
    char ch;
    ch = 'a'; 
    char lower_ch = tolower(ch);

    if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}