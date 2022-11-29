/*
3.Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
*/


#include<stdio.h>
int CountTwo(int iNo)
{
int iCnt=0;
int iR=0;
while(iNo!=0)
{
    iR=iNo%10;
    if((iR==2)||(iR==-2))
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
iRet = CountTwo(iValue);
printf("number of time 2 has occured is %d",iRet);
return 0;
}

