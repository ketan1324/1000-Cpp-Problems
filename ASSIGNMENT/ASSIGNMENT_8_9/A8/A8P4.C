//4.Write a program which accept number from user and display its table.
//Input : 5
//Output : 5 10 15 20 25 30 35 40 45 50
//
#include<stdio.h>
//////////////////////////////////////
//function:Table
//
//parameters:Integer
//
//return value:NOne
//
//description:prints table
//
//author:KETAN MAHESH DOSHI
//
//date:-7/aug/2020
//////////////////////////////////


void Table(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;
    int iTab=1;
    for (iCnt=1;iCnt<=10;iCnt++)
    {

        iTab=iNo*iCnt;
        printf("%d\n",iTab);
        printf("\n");
    }

}
int main()
{
int iValue = 0;
printf("Enter Number : ");
scanf("%d",&iValue);
Table(iValue);
return 0;
}
