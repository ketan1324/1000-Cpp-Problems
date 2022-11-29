//
//problem statement:accept one number from and check weather it is divisible by 5 or not.
//
//
//////////////////////////////////////
//function:Check
//
//parameters:int
//
//return value:BOOL
//
//description:checks weather a number is divisible by 5 or not.
//
//author:KETAN MAHESH DOSHI
//
//date:-25 july 2020
//////////////////////////////////

#include<stdio.h>

typedef int BOOl;

 #define TRUE 1
#define FALSE 0

int main()
{
    int iValue=0;
    BOOl bRet =FALSE;                //IT MEANS int iRet =0;
    printf("enter a number");
    scanf("%d",&iValue);
    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf(" divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}

int Check(int iNo)
{

    if((iNo%5)==0)
    {

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
















