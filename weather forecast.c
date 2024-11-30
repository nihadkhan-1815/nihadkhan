#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temperature, converted_temp;

    printf("Weather Forecast System\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted_temp = celsius_to_fahrenheit(temperature);
        printf("Temperature in Fahrenheit: %.2f°F\n", converted_temp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted_temp = fahrenheit_to_celsius(temperature);
        printf("Temperature in Celsius: %.2f°C\n", converted_temp);
    } else {
        printf("Invalid choice. Please choose 1 or 2.\n");
    }

    return 0;
}