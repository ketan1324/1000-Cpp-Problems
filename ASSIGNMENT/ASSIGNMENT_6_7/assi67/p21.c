/*
1.Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
*/


#include<stdio.h>
int CountEven(int iNo)
{
int iCnt=0;
int iR=0;
while(iNo!=0)
{

    iR=iNo%10;
    if(iR%2==0)
    {
        iCnt++;
    }
    iNo=iNo/10;
}
return iCnt;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("enter number");
scanf("%d",&iValue);
iRet = CountEven(iValue);
printf("count is %d",iRet);
return 0;
}

