//problem 4
//
//problem statement:accept two numbers from user and display first number in second number of times.
//

//////////////////////////////////////
//function:Display
//
//parameters:Integer
//
//return value:Interger
//
//description:Displays number first number of times second number
//
//author:KETAN MAHESH DOSHI
//
//date:- 25 july 2020
//////////////////////////////////


#include<stdio.h>

int main()
{
    int iValue=0;

    int iCount=0;

    printf("enter a number ");

    scanf("%d",&iValue);

    printf("ENTER FREQUENCY");

    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
int Display(int iNo,int f)
{
    int int1 =0;
    for(int1 =1;int1<=f;int1++)
    {
        printf("%d",f);
    }
}
