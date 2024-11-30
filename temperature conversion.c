#include <stdio.h>

void celsius_to_fahrenheit() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit);
}

void fahrenheit_to_celsius() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f°F is equal to %.2f°C\n", fahrenheit, celsius);
}

int main() {
    int choice;
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose conversion (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            celsius_to_fahrenheit();
            break;
        case 2:
            fahrenheit_to_celsius();
            break;
        default:
            printf("Invalid choice. Please choose 1 or 2.\n");
    }

    return 0;
}