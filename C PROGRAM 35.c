#include <stdio.h>

void countEven(int arr[], int size) {
    int even_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("Number of even elements: %d\n", even_count);
   
}

int main() {
    int size1 = 5;
    int arr1[] = {1, 2, 3, 4, 6};
    printf("Input: %d | ", size1);
    for(int i=0; i<size1; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    countEven(arr1, size1);
    
    printf("---\n");

    int size2 = 4;
    int arr2[] = {5, 7, 9, 11};
    printf("Input: %d | ", size2);
    for(int i=0; i<size2; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    countEven(arr2, size2);

    return 0;
}