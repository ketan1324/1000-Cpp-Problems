
#include<stdio.h>
int FactorialDiff(int iNo)
{
int iCnt=0;
int iESum=1;
int iOSum=1;
int iFact=1;
 for(iCnt=1;iCnt<=iNo;iCnt++)
    {

            if(iCnt%2==0)
            {
            iESum=iESum*iCnt;
            }
            if(iCnt%2!=0)
            {
                iOSum=iOSum*iCnt;
            }
            iFact=iESum-iOSum;
    }
    return iFact;
}
int main()
{
int iValue = 0,iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactorialDiff(iValue);
printf("Factorial difference is %d",iRet);
return 0;
}
