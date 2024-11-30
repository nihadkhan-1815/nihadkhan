1.Validating numeric input 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_numeric(const char *str) {
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main() {
    char input[100];
    printf("Enter a number: ");
    fgets(input, sizeof(input), stdin);

    if (is_numeric(input)) {
        printf("Valid number: %d\n", atoi(input));
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

2. Preventing Buffer Overflows

#include <stdio.h>

int main() {
    char buffer[50];
    printf("Enter some text (max 49 characters): ");
    if (fgets(buffer, sizeof(buffer), stdin)) {
        printf("You entered: %s", buffer);
    } else {
        printf("Error reading input\n");
    }

    return 0;
}

3. Validating String Input

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_alpha(const char *str) {
    while (*str) {
        if (!isalpha(*str)) return 0;
        str++;
    }
    return 1;
}

int main() {
    char input[50];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets
    input[strcspn(input, "\n")] = '\0';

    if (is_alpha(input)) {
        printf("Valid string: %s\n", input);
    } else {
        printf("Invalid string\n");
    }

    return 0;
}

4. Length Validation

#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    printf("Enter a string (max 19 characters): ");
    if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = '\0'; // Remove newline
        if (strlen(input) < 20) {
            printf("Valid input: %s\n", input);
        } else {
            printf("Input too long!\n");
        }
    } else {
        printf("Error reading input\n");
    }

    return 0;
}