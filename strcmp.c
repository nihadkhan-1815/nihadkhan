#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int result;
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }
    result = strcmp(string1, string2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;