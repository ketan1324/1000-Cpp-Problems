#include<stdio.h>
int DollarToINR(int iNo)
{
int iCnt=0;
int iDollar=0;
iDollar=iNo*70;
return iDollar;

}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter number of USD : \n");
scanf("%d",&iValue);
iRet = DollarToINR(iValue);
printf("Value in INR is %d",iRet);

return 0;
}
