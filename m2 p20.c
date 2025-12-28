#include <stdio.h>

int main() {
    int nonZeroValue = 10; 
    int result = !nonZeroValue;
    printf("The result of logical NOT on %d is: %d\n", nonZeroValue, result);

    return 0;
}