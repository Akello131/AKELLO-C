#include <stdio.h>
int main() {
    // Constants for exchange rates
    const float D = 3800.0;   // 1 USD = 3800 UGX
    const float P = 4700.0;   // 1 GBP = 4700 UGX
    const float E = 4200.0;   // 1 EUR = 4200 UGX
    const float K = 33.0;     // 1 KES = 33 UGX

    float UgShs, result;
    int choice;

    // Ask user for amount
    printf("Enter the amount in UgShs: ");
    scanf("%f", &UgShs);

    // Ask user which currency they want
    printf("Choose the currency to convert to:\n");
    printf("1. US Dollars\n");
    printf("2. British Pounds\n");
    printf("3. Euros\n");
    printf("4. Kenyan Shillings\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform conversion based on choice
    switch(choice) {
        case 1:
            result = UgShs / D;
            printf("Dollars= %.2f\n", result);
            break;
        case 2:
            result = UgShs / P;
            printf("Pounds= %.2f\n", result);
            break;
        case 3:
            result = UgShs / E;
            printf("Euros= %.2f\n", result);
            break;
        case 4:
            result = UgShs / K;
            printf("Kenyan Shillings= %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
             } 
             return 0;
         }

    

