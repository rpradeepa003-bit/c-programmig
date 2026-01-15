#include <stdio.h>
#include <string.h>
#define OFFICIAL_DOMAIN "@company.com"

int main() {
    char email[100];
    printf("Enter an email address: ");
    scanf("%s", email);

    int email_len = strlen(email);
    int domain_len = strlen(OFFICIAL_DOMAIN);

    if (email_len >= domain_len && strcmp(email + email_len - domain_len, OFFICIAL_DOMAIN) == 0) {
        printf("The email address belongs to the official domain.\n");
    } else {
        printf("The email address does not belong to the official domain.\n");
    }

    return 0;
}