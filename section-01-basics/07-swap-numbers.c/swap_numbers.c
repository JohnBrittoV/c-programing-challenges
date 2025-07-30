/* 
swap_numbers.c
Swap two intergers using a temporary variable
*/

#include<stdio.h>

int main()
{
    // Declare variables
    int number_01;
    int number_02;
    int temp_variable;

    // Get first interger input from the user
    printf("Enter the First number: ");
    scanf("%d", &number_01);

    // Get second integer input from the user
    printf("Enter the Second number: ");
    scanf("%d", &number_02);

    // Display before swap
    printf("\n Numbers before swap ");
    printf("\n --------------------");
    printf("\n First Number  : %d",number_01);
    printf("\n Second Number : %d\n",number_02);
        
    // Swap two numbers using temporary variable
    temp_variable = number_01;
    number_01 = number_02;
    number_02 = temp_variable;

    // Display after swap
    printf("\n Numbers after swap ");
    printf("\n -------------------");
    printf("\n First Number  : %d",number_01);
    printf("\n Second Number : %d",number_02);

    return 0;
}