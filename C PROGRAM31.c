#include <stdio.h> 
int main() { 
    int n, i; 
    int arr[100]; 
    printf("Input: "); 
 
    if (scanf("%d", &n) != 1) { 
        return 1; 
    } 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
    printf("Output: "); 
    for (i = 0; i < n; i++) { 
        printf("%d%s", arr[i], (i == n - 1) ? "" : " "); 
    } 
    printf("\n"); 
    return 0; 
}