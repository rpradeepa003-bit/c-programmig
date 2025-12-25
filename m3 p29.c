#include <stdio.h>
int main() {
int n;
printf("Input: ");
scanf("%d", &n);
if  (n % 4 == 0 && n % 8 != 0) {
printf("Output: Yes\n");
}
 else {
printf("Output: No\n");
 }
 return 0;
}