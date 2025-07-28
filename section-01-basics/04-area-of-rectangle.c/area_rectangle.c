/*
sum_of_two.c
Area of rectangle
Read length & breadth, compute area using area = length * breadth.
*/

#include<stdio.h>

int main()
{
    //Initialize variables
    int length = 0;
    int breadth = 0;
    int area = 0;

    //Enter the length
    printf("Enter the length: \n");
    scanf("%d", &length);

    //Enter the breadth
    printf("Enter the breadth: \n");
    scanf("%d", &breadth);

    //Compute area using length x breadth 
    area = length * breadth;

    //Display area
    printf("\nLength of the rectangle %d", length);
    printf("\nBreadth of the rectangle %d", breadth);
    printf("\nArea of rectangle %d\n", area);

    return 0;
}