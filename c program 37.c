#include <stdio.h>

int main() {
    int arr[100], size, i, search_element, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search_element);

    for (i = 0; i < size; i++) {
        if (arr[i] == search_element) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}