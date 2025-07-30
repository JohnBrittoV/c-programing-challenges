/* 
ascii_value_character.c
Print ASCII value of a character
Get input from user print corresponding ASCII value
*/

#include<stdio.h>

int main()
{
    //Declaration
    char character;

    //Get a character from the user 
    printf("Enter a character to find its ASCII value: ");
    scanf("%c", &character);

    //Print the ASCII value
    printf("The ASCII value of %c = %d", character, character);

    return 0;
}