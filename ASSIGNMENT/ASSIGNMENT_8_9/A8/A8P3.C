//
//PROBLEM STATEMENT:3.Write a program to find factorial of given number.
//Input : 5
//Output : 120 (5 * 4 * 3 * 2 * 1)
//
//

#include<stdio.h>

//////////////////////////////////////
//function:Factorial
//
//parameters:Integer
//
//return value:Integer.
//
//description:prints the factorial of a number .
//
//author:KETAN MAHESH DOSHI
//
//date:-7/AUG/2020
//////////////////////////////////

int Factorial(int iNo)
{

    if(iNo<0)
    {
        iNo=-iNo;
    }

int iCnt=1;
int iFact=1;
for(iCnt=1;iCnt<=iNo;++iCnt)
{
    iFact=iFact*iCnt;


}


return iFact;

}
int main()
{
int iValue = 0,iRet = 0;

printf("Enter Number : ");
scanf("%d",&iValue);
iRet = Factorial(iValue);

printf("Factorial of number is %d",iRet);
return 0;
}
