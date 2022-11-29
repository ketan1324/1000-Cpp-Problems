//
//PROBLEM STATMENT: 1. Write a program which accept number from user and if number is less than 50
//then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large.
//Input : 75
//Output : Medium

#include<stdio.h>
//////////////////////////////////////
//function:Number
//
//parameters:Integer
//
//return value:None
//
//description:prints the word if less than or grater than than the values given.
//
//author:KETAN MAHESH DOSHI
//
//date:-2020
//////////////////////////////////


void Number(int iNo)
{
if(iNo<50)
{
    printf("Small");
}
else if(iNo>50&&iNo<100)
{
    printf("Medium");
}
else
{
    printf("Large");
}
}

int main()
{
int iValue = 0;
printf("Enter Number : ");
scanf("%d",&iValue);
Number(iValue);
return 0;
}
