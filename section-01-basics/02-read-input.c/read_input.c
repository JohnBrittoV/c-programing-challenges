/*
read_input.c
Gets one integer input and prints it
User input & display*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num = 0;
    printf("\n Enter an integer: ");
    
    //Get input from the user
    scanf("%d", &num);

    //Display the integer
    printf("You are entered: %d", num);
    return 0;

}