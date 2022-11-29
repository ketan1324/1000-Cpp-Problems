//problem 3
//
//problem statement:accept a number from user and if number is less than 10 then print hello and if greater then print demo
//
//////////////////////////////////////
//function:Display
//
//parameters:Integer
//
//return value:Interger
//
//description:displays the required
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
int Display(int iNo)
{
    if(iNo<11)
    {
        printf("Hello \n");
    }
    else
    {
            printf("Demo\n");
    }
}
