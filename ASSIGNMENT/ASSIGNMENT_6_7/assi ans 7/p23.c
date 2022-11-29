/*
3.Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1

*/
#include<stdio.h>
int Countodd(int iNo)
{
int iCnt=0;
int iR=0;
while(iNo!=0)
{

    iR=iNo%10;
    if(iR>3&&iR<7)
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
iRet = Countodd(iValue);
printf("count is %d",iRet);
return 0;
}
