/*
4.Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
*/


#include<stdio.h>
int Countmulti(int iNo)
{
int iCnt=0;
int iR=0;
int iM=1;
while(iNo!=0)
{
    iR=iNo%10;
    iM=iM*iR;
    iNo=iNo/10;

}


return iM;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("enter number");
scanf("%d",&iValue);
iRet = Countmulti(iValue);
printf("multiplication isN %d",iRet);
return 0;
}
