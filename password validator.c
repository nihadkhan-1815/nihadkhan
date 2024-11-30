
#include <stdio.h>
#include <string.h>
#include <ctype.h>

Function to check if the password meets the criteria
int checkPassword(char *password) {
    int hasUppercase = 0, hasLowercase = 0, hasNumber = 0, hasSpecialChar = 0;
    int minLength = 8;

    
    if (strlen(password) < minLength) {
        printf("Password must be at least %d characters long.\n", minLength);
        return 0;
    }

   
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) hasUppercase = 1;
        if (islower(password[i])) hasLowercase = 1;
        if (isdigit(password[i])) hasNumber = 1;
        if (strchr("!@#$%^&*(),.?\":{}|<>", password[i])) hasSpecialChar = 1;
    }

    
    if (!hasUppercase) {
        printf("Password must include at least one uppercase letter.\n");
        return 0;
    }

    
    if (!hasLowercase) {
        printf("Password must include at least one lowercase letter.\n");
        return 0;
    }

    // Check for numbers
    if (!hasNumber) {
        printf("Password must include at least one number.\n");
        return 0;
    }

    
    if (!hasSpecialChar) {
        printf("Password must include at least one special character.\n");
        return 0;
    }

    return 1; 
}

int main() {
    char password[100];

    printf("Enter a password: ");
    scanf("%99s", password);

    if (checkPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;
}