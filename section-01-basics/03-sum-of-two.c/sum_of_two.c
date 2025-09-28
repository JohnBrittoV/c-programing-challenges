/*
sum_of_two.c
Sum of two numbers
Read two integers and display thier sum
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Initialize variables
    int number_01 = 0;
    int number_02 = 0;
    int sum_result = 0;

    //Input the first number
    printf("Enter the first number: \n");
    scanf("%d", &number_01);

    //Input the second number
    printf("Enter the second number: \n");
    scanf("%d", &number_02);

    //Calculate the two numbers
    sum_result = number_01 + number_02;

    //Display the sum result
    printf("Sum of %d + %d = %d", number_01, number_02, sum_result);

    return 0;

}