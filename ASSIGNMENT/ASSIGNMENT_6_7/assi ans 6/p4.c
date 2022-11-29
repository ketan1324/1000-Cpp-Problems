/*
4.Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
*/

#include<stdio.h>
int CountFour(int iNo)
{
int iCnt=0;
int iR=0;
while(iNo!=0)
{
    iR=iNo%10;
    if(iR==4)
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
iRet = CountFour(iValue);
printf("number of time 4 has occured is %d",iRet);
return 0;
}

