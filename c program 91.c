#include <stdio.h>
#include <string.h>

struct Account {
    int account_number;
    char name[50];
    float balance;
};

int main() {
    // Example: Store details for one customer
    struct Account customer1;

    customer1.account_number = 12345;
    strcpy(customer1.name, "John Doe");
    customer1.balance = 5000.75;

    // Display the details
    printf("Account Details:\n");
    printf("Account Number: %d\n", customer1.account_number);
    printf("Name: %s\n", customer1.name);
    printf("Balance: $%.2f\n", customer1.balance);

    return 0;
}