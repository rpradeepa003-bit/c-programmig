#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l) {
        if (str[l++] != str[h--]) {
            return false;
        }
    }
    return 1;
}

int main() {
    char str1[] = "madam";
    char str2[] = "hello";

    if (isPalindrome(str1)) {
        printf("%s is Palindrome\n", str1);
    } else {
        printf("%s is Not Palindrome\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("%s is Palindrome\n", str2);
    } else {
        printf("%s is Not Palindrome\n", str2);
    }

    return 0;
}