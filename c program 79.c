#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    int word_count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char* token = strtok(sentence, " \n\t");
    while (token != NULL) {
        word_count++;
        token = strtok(NULL, " \n\t");
    }

    printf("Word count: %d\n", word_count);
    return 0;
}