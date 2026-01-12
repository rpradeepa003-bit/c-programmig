#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    int i;

    strcpy(str, "hello");
    printf("Input: \"%s\" -> Output: ", str);
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for (i = 0; i < strlen(str); i++) {
        if (freq[str[i]] > 0) {
            printf("%c%d ", str[i], freq[str[i]]);
            freq[str[i]] = 0; 
        }
    }
    printf("\n");

    for(i=0; i<256; i++) freq[i] = 0; 
    strcpy(str, "aab");
    printf("Input: \"%s\" -> Output: ", str);
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for (i = 0; i < strlen(str); i++) {
        if (freq[str[i]] > 0) {
            printf("%c%d ", str[i], freq[str[i]]);
            freq[str[i]] = 0;
        }
    }
    printf("\n");

    return 0;
}