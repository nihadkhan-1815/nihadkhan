#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int length;
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }
    length = strlen(string);
    printf("The length of the string is: %d\n", length);

    return 0;
