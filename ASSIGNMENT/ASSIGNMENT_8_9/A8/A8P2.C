//
//PROBLEM STATEMENT:2. Accept single digit number from user and print it into word.
//Input : 9
//Output : Nine

#include<stdio.h>

//////////////////////////////////////
//function:DISPLAY
//
//parameters:Integer
//
//return value:None
//
//description:SINGLE DIGIT WORD.
//
//author:KETAN MAHESH DOSHI
//
//date:-7/AUG/2020
//////////////////////////////////
void Display(int iNo)
{
if(iNo<0)
{
    iNo=-iNo;
}
if(iNo==0)
{
    printf("zero");
}
else if(iNo==1)
{
    printf("One");
}

else if(iNo==2)
{
    printf("Two");
}
else if(iNo==3)
{
    printf("Three");
}
else if(iNo==4)
{
    printf("Four");
}
else if(iNo==5)
{
    printf("Five");
}
else if(iNo==6)
{
    printf("Six");
}
else if(iNo==7)
{
    printf("Seven");
}else if(iNo==8)
{
    printf("Eight");
}else if(iNo==9)
{
    printf("Nine");
}else if(iNo>9)
{
    printf("Invalid input");
}
}


int main()
{
int iValue = 0;
printf("Enter Number : ");
scanf("%d",&iValue);
Display(iValue);
return 0;
}
