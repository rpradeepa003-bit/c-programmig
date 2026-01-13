#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 26

int main() {
    char str1[100], str2[100];
    int count1[SIZE] = {0}, count2[SIZE] = {0};
    int i, len1, len2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    for (i = 0; i < SIZE; i++) {
        if (count1[i] != count2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}