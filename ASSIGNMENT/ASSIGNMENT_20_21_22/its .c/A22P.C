/*
Problem statement  : accept N numbers fron user and also input a number as NO return the fequency of NO
*/
#include<stdio.h>
#include<stdlib.h>
int FreqNO(int arr[],int iSize,int NOX)
{
    int iCnt=0,iCnt2=0;;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]==NOX)
        {
           iCnt2++;
        }
    }
    return iCnt2;
}
int main()
{
    int iCnt=0,*ptr=NULL,iRet=0,NO=0,iValue=0;
    printf("Enter the value of : ");
    scanf("%d",&iValue);
     printf("Enter the value of  NO: ");
    scanf("%d",&NO);

    ptr=(int *)malloc(iValue*sizeof(int ));
    printf(" enter the values of N :");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=FreqNO(ptr,iValue,NO);
    printf("frequency of NO is %d",iRet);
    return 0;
}
