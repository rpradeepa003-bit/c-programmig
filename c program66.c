#include <stdio.h>

int main() {
    int n, count = 0;
    int arr[50], temp[50];

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < count; j++) {
            if (arr[i] == temp[j]) {
                break;  
            }
        }
        if (j == count) {
            temp[count] = arr[i];
            count++;
        }
    }

    printf("Array After Removing Duplicates: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}