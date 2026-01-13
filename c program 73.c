#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], current_word[50], longest_word[50];
    int i, j = 0, longest_len = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            current_word[j++] = sentence[i];
        } else {
            current_word[j] = '\\0'; 

            if (strlen(current_word) > longest_len) {
                longest_len = strlen(current_word);
                strcpy(longest_word, current_word);
            }
            j = 0; 
        }
    }

    printf("Longest word: %s", longest_word);

    return 0;
}