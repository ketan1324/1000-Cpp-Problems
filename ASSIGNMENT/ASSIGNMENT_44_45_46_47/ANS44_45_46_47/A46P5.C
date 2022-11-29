#include<stdio.h>
#include<stdlib.h>
int Display(int iNo)
{
   static int iFact=1;
    int iRem=0;
    if(iNo>=1)
    {
        iRem=iNo%10;
        iFact=iFact*iRem;
        iNo=iNo/10;
        Display(-- iNo);
    }
}
int main()
{
    int iNo=0;
    printf("Enter kar baba:");
    scanf("%d",&iNo);
    int iRet;
    iRet=Display(iNo);
    printf("%d",iRet);
    return 0;
}
