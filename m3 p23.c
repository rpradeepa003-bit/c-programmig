#include <stdio.h>
int main() {
char character;
printf("Input: ");
scanf("%c", &character);
if (isalpha(character)) {
printf("Output: Alphabet\n");
} else if (isdigit(character)) {
printf("Output: Digit\n");
} else {
printf("Output: Special Character\n"); }

return 0;
}