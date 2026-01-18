#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (sentence[0] != '\0') {
        sentence[0] = toupper(sentence[0]);
    }

    printf("Capitalized sentence: %s", sentence);
    return 0;
}