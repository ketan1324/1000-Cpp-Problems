// problem 5
//
//problem statement:accept a number from user and check weather it is even or odd
//
//////////////////////////////////////
//function:ChkEven
//
//parameters:Integer
//
//return value:Interger
//
//description:checks even number
//
//author:KETAN MAHESH DOSHI
//
//date:-25 july 2020
//////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int main()
{
    int iValue=0;
    BOOL bRet = FALSE;     //IT MEANS int iRet=0
    printf("Enter a number");
    scanf("%d",&iValue);
    bRet=ChkEven(iValue);
    if(bRet==TRUE)
    {
        printf("NUMBER IS ODD");
    }
    else
        {
            printf("Number is EVEN");
        }
    return 0;
}
BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

