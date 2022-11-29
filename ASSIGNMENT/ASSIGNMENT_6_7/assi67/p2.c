/*
2.Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
*/


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
int iCo=0;
int iR=0;
while(iNo!=0)
{


iR=iNo%10;
if(iR==0)

{
break;
}
if(iR==0)

{
    return TRUE;
}
else
{
    return FALSE;
}
iNo=iNo/10;
}

}
int main()
{
int iValue = 0;
BOOL bRet = FALSE;
printf("enter number");
scanf("%d",&iValue);
bRet = ChkZero(iValue);
if(bRet == TRUE)
{
printf("it contains zero");
}
else
{
printf("no zero");
}
return 0;
}
