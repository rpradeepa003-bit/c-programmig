#include <stdio.h>

int string_compare(char *str1, char *str2) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return str1[i] - str2[i];
}
int main() {
    char str1[] = "abc";
    char str2[] = "abc";
    char str3[] = "abc";
    char str4[] = "abd";

    if (string_compare(str1, str2) == 0) {
        printf("Input: \"%s\" \"%s\" Output: Equal\n", str1, str2);
    } else {
        printf("Input: \"%s\" \"%s\" Output: Not Equal\n", str1, str2);
    }

    if (string_compare(str3, str4) == 0) {
        printf("Input: \"%s\" \"%s\" Output: Equal\n", str3, str4);
    } else {
        printf("Input: \"%s\" \"%s\" Output: Not Equal\n", str3, str4);
    }

    return 0;
}