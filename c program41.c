#include <stdio.h>

int main() {
    int arr[100];
    int size, count = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }
    printf("Total negative elements in array = %d", count);
    return 0;
}