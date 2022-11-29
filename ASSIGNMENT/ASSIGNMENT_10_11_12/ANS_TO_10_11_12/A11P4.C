/*
4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
*/

#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
int iSum=0;
    int iCnt=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
        iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d”",&iValue2);
iRet = RangeSumEven(iValue1, iValue2);
printf("Addition is %d",iRet);
return 0;
}
