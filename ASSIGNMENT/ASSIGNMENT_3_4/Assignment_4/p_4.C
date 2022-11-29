//
//4.Write a program which accept number from user and return summation of all its
//non factors.
//
//
#include<stdio.h>
int NonSum(int);

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the number");
    scanf("%d",&iValue);
    iRet=NonSum(iValue);
    printf("%d",iRet);
    return 0;
}
int NonSum(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=2;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
