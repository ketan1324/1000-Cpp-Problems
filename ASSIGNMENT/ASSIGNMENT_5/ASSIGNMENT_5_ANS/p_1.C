//
//Write a program which accept name from user and print that name.
//
#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter full name: ");
   gets(Name);               //check with array to: this is array only LOL  :)

    printf("Your full name is %s ",Name);
    return 0;
}
