#include <stdio.h>

void convert_temperature();
void convert_length();
void convert_weight();
void convert_volume();

int main() {
    int option;

    while (1) {
        printf("\n--- Universal Measurement Converter ---\n");
        printf("1. Convert Temperature\n");
        printf("2. Convert Length\n");
        printf("3. Convert Weight\n");
        printf("4. Convert Volume\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                convert_temperature();
                break;
            case 2:
                convert_length();
                break;
            case 3:
                convert_weight();
                break;
            case 4:
                convert_volume();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option! Please choose a valid option.\n");
        }
    }
    return 0;
}

void convert_temperature() {
    int choice;
    float temp, converted;

    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}

void convert_length() {
    int choice;
    float length, converted;

    printf("\nLength Conversion:\n");
    printf("1. Meters to Feet\n");
    printf("2. Feet to Meters\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter length in meters: ");
        scanf("%f", &length);
        converted = length * 3.28084;
        printf("Length in feet: %.2f ft\n", converted);
    } else if (choice == 2) {
        printf("Enter length in feet: ");
        scanf("%f", &length);
        converted = length / 3.28084;
        printf("Length in meters: %.2f m\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}

void convert_weight() {
    int choice;
    float weight, converted;

    printf("\nWeight Conversion:\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter weight in kilograms: ");
        scanf("%f", &weight);
        converted = weight * 2.20462;
        printf("Weight in pounds: %.2f lbs\n", converted);
    } else if (choice == 2) {
        printf("Enter weight in pounds: ");
        scanf("%f", &weight);
        converted = weight / 2.20462;
        printf("Weight in kilograms: %.2f kg\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}

void convert_volume() {
    int choice;
    float volume, converted;

    printf("\nVolume Conversion:\n");
    printf("1. Liters to Gallons\n");
    printf("2. Gallons to Liters\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter volume in liters: ");
        scanf("%f", &volume);
        converted = volume * 0.264172;
        printf("Volume in gallons: %.2f gal\n", converted);
    } else if (choice == 2) {
        printf("Enter volume in gallons: ");
        scanf("%f", &volume);
        converted = volume / 0.264172;
        printf("Volume in liters: %.2f L\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}