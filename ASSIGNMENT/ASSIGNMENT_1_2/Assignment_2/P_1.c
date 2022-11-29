//assignment 2
//problem 1
//
//problem statement:accept one number from user and print that much number of *.
//
//////////////////////////////////////
//function:Display
//
//parameters:integers
//
//return value:none
//
//description:prints "*"
//
//author:KETAN MAHESH DOSHI
//
//date:-25 july 2020
//////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue=0;
    printf("enter a number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;N
}


