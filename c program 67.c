#include <stdio.h>

int main() {
    int size1, size2, mergedSize, i, j;
  
    int arr1[100], arr2[100], merged[200];

    printf("Enter the size of the first  array: ");
    scanf("%d", &size1);
    printf("Enter elements of the first  array: ");

    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter elements of the second array: "); 

    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    mergedSize = size1 + size2;
    for (j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }

    printf("The merged array is: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
