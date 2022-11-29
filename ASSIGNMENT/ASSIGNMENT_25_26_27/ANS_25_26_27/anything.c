#include<stdio.h>

int main()
{
    int idigit1=0,iOSum=0,iESum=0;
    int iValue=0;
    printf("enter the dogit");
    scanf("%d",&idigit1);

    while(idigit1!=0)
    {
       iValue=idigit1%10;
       if(iValue%2==0)
       {
           iESum=iESum+iValue;
       }
       else
       {
           iOSum=iOSum+iValue;

       }
       idigit1=idigit1/10;
    }
    printf("the difference is %d",iESum-iOSum);
    return 0;
}

