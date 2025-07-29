/* 
simple-interest.c
Calculate simple interest using formula:
Simple Interest = (Principal x Rate X Time) / 100
*/

#include<stdio.h>

int main()
{
    // initialize variables
    float principal_amount;
    float interest_rate;
    float time_years;
    float interest;

    // Get principal Amount from the user
    printf("Enter the Principal amount: ");
    scanf("%f", &principal_amount);
    
    // Get interest Rate form the user
    printf("Enter the rate of interest: ");
    scanf("%f", &interest_rate);

    // Get time in Year form the user
    printf("Enter the time in Years: ");
    scanf("%f", &time_years);

    //Calculate simple interest 
    interest = (principal_amount * interest_rate * time_years) / 100;
    
    //Display results
    printf("\n Simple Interest Calculator: \n");
    printf(" ---------------------------------------- ");
    printf("\n Principal Amount    :   %.2f",principal_amount);
    printf("\n Interest Rate       :   %.2f",interest_rate);
    printf("\n Time in Years       :   %.2f",time_years);
    printf("\n --------------------------------------- \n");
    printf("Interest            :   %.2f\n",interest);

    return 0;

}