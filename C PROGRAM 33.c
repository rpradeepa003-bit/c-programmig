#include <stdio.h>
#include <stdlib.h> 

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for number of elements.\n");
        return 1;
    }
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for element %d.\n", i + 1);
            free(arr); 
            return 1;
        }
    }

    int maximum = findMax(arr, n);
    printf("Maximum element is: %d\n", maximum);


    free(arr);

    return 0;
}