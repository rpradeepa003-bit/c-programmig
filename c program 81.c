#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidOTP(char* otp) {
    if (strlen(otp) != 6) {
        return 0; 
    }

    for (int i = 0; i < 6; i++) {
        if (!isdigit(otp[i])) {
            return 0; 
        }
    }

    return 1;
}

int main() {
    char otp[20];
    printf("Enter the 6-digit OTP: ");
    scanf("%s", otp);
    
    if (isValidOTP(otp)) {
        printf("The entered OTP is valid.\n");
    } else {
        printf("The entered OTP is invalid.\n");
    }

    return 0;
}