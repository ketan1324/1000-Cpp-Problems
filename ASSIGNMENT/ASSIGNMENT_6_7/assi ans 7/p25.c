/*
5.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
*/


#include<stdio.h>
int Countmulti(int iNo)
{
int iE=0;
int iF=0;
int iO=0;
int iR=0;
while(iNo!=0)
{
    iR=iNo%10;
    if(iR%2==0)
    {
        iE=iE+iR;
    }
    else
        {
                iO=iO+iR;
        }
    iNo=iNo/10;
}

iF=iE-iO;
return iF;
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

