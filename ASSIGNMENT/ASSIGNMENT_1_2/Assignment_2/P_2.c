//problem 2
//
//problem statement:accept one number from user and print that number of *on screen.
//
//////////////////////////////////////
//function:Display
//
//parameters:Integers
//
//return value:None
//
//description:prints *on the screen
//
//author:KETAN MAHESH DOSHI
//
//date:-25 july 2020
//////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue=0;
    printf("enter a number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}

