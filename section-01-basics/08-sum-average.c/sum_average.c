/* 
sum_average.c
Compute the sum and average of three numbers
*/

#include<stdio.h>

int main()
{
    // Declare variables
    float number_01, number_02, number_03;
    float sum;
    float average;

    // Get input of three numbers from user
    printf("Enter the three numbers: ");
    scanf("%f %f %f", &number_01,&number_02,&number_03);

    // Display the three numbers
    printf("\n The Entered three numbers are: %.2f, %.2f, %.2f", number_01,number_02,number_03);
    
    // Calculate sum & average
    sum = number_01 + number_02 + number_03;
    average = sum / 3;

    // Display the sum and average
    printf("\n sum = %.2f", sum);
    printf("\n Average = %.2f", average);

    return 0;
}