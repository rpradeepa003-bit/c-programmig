#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    char source[100], destination[100];
    char separator;

    printf("Input: ");
    if (scanf("%d%c%s", &size, &separator, source) != 3) {
        printf("Invalid input format.\\n");
        return 1;
    }

    for (i = 0; i < size; i++) {
        destination[i] = source[i];
    }
    destination[size] = '\0'; 

    printf("Output: %s", destination);

    return 0;
}