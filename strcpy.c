#include <stdio.h>
#include <string.h>
int main() {
    char source[100], destination[100];
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    if (source[strlen(source) - 1] == '\n') {
        source[strlen(source) - 1] = '\0';
    }
    strcpy(destination, source);
    printf("Source string: %s\n", source);
    printf("Destination string (copied): %s\n", destination);

    return 0;
}