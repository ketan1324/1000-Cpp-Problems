//Write a program which accept N and print first 5 multiples of N.
//Input : 4
//Output : 4 8 12 16 20
#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iMult=1;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
       iMult=iCnt*iNo;
       printf("%d\n",iMult);
    }
}
int main()
{
int iValue = 0;
printf("enter number : ");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}

