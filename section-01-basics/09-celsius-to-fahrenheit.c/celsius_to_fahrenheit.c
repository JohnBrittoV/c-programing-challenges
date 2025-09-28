/* 
celsius_to_fahrenheit.c
Convert temperature using formula
To convert the temperature F = (C * 9/5) + 32
*/

#include<stdio.h>

int main()
{
    // Decalre variabales
    float fahrenheit;
    float celsius;
    
    //Get Celsius form the user
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert temperature  
    fahrenheit = (celsius * 9/5) + 32;

    //Display results
    printf("\n Convert Celsius to Fahrenheit: ");
    printf("\n -------------------------------");
    printf("\n Temperature in Celsius: %.2f",celsius);
    printf("\n Temperature to Fahrenheit: %.2f",fahrenheit);

    return 0;
}