/*
Problem statement : accept N numbers from user and return the difference between summation of even number and odd number
   N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/
#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRMEMORY -2
int Difference(int arr[],int iSize)
{
    int iEven=0;
    int iOdd=0;
    int iCnt=0,iDiff=0;
    if(arr<=0)
    {
        return ERRMEMORY;
    }
    if(iSize<=0)
    {
        return ERRSIZE;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iCnt%2==0)
        {
            iEven=iEven+arr[iCnt];
        }
        else
        {
            iOdd=iOdd+arr[iCnt];
        }

    iDiff=iEven-iOdd;

    }

    return iDiff;
}
int main()
{
    int iValue=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter the value for N :");
    scanf("%d",&iValue);
    if(iValue<=0)
    {
        printf("Error : invalid value for N");
    }
    ptr =(int *)malloc(iValue*sizeof(int));

    if(ptr == NULL)
{
printf("Unable to allocate memory”");

return -1;
}
    printf("Enter the values for N :");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }
    printf("your entered values are : ");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    iRet=Difference(ptr,iValue);
    printf("\n\nthe difference between the summation of two is %d",iRet);
    return 0;
}

