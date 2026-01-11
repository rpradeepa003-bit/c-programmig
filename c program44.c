#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], size, i;
    int max1, max2;

    printf("Please Enter the Number of elements in an array: ");
    scanf("%d", &size);

    printf("Please Enter %d elements of an Array\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;

    for (i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    printf("The Second Largest Number in this Array = %d\n", max2);

    return 0;
}