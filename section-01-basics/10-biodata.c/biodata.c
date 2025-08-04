/* 
biodata.c
Program to prepare a biodata
Personal information and acedemic details */

#include<stdio.h>

int main()
{
    // Declare variables
    char email[20];
    char name[35];
    char house_name[15];
    char place[10];
    char qualificaton[10];
    int birth_date;
    int birth_month;
    int birth_year;
    int age;
    int phone_number[10];
    float percentage;

    // Input form user
    printf("\n Enter your email: ");
    scanf("%s", &email);

    printf("\n Enter your name: ");
    scanf("%s", &name);

    printf("\n Enter your dob (in dd mm yyyy format): ");
    scanf("%d %d %d", &birth_date, &birth_month, &birth_year);
    
    printf("\n Enter your house name: ");
    scanf("%s", &house_name);

    printf("\n Enter your place: ");
    scanf("%s", &place);

    printf("\n Enter your phone no: ");
    scanf("%d", &phone_number);

    printf("\n Enter your qualification: ");
    scanf("%s", &qualificaton);

    printf("\n Enter your mark percentage: ");
    scanf("%f" ,&percentage);

    //Calculate age from dob
    age = 2025 - birth_year;

    //Display the biodata 
    printf("\n ------------------------ Biodata -------------------------------");
    printf("\n ----------------------------------------------------------------");
    printf("\n Your Email Id is     : %s", email);
    printf("\n Your Name is         : %s", name);
    printf("\n Your Date of Birth   : %d/%d/%d", birth_date, birth_month, birth_year);
    printf("\n Your Age (in 2025)   : %d", age);
    printf("\n Your House Name      : %s", house_name);
    printf("\n Your Place           : %s", place);
    printf("\n Your Phone No        : %d", phone_number);
    printf("\n Your Qualification   : %s", qualificaton);
    printf("\n Mark Percentage      : %.2f", percentag
    
    return 0;
}