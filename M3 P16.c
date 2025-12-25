#include <stdio.h>
int main() {
int units;
int bill;
printf("Enter units: ");
scanf("%d", &units);
if (units <= 100) {
bill = units * 1;
} else {
bill = (100 * 1) +
((units - 100) * 7);
}
printf("Total bill: %d\n", bill);
return 0;
}