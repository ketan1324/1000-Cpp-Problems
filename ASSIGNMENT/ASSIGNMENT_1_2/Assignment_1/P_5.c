//
//problem statement :accept one number from user and print that number of "*" on screen.
//
//////////////////////////////////////
//function:Accept
//
//parameters:Integers.
//
//return value:None
//
//description:* printing
//
//author:KETAN MAHESH DOSHI
//
//date:-25 july 2020
//////////////////////////////////


#include<stdio.h>
int main()
{

    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;

}
void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}

