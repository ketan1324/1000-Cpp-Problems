/*
Problem statement : accept n numbers from user and return the difference of frequency of summation of even numbers and odd
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/
#include<stdio.h>
#include<stdlib.h>
int FreqChk(int arr[],int iSize)
{
    int iCnt=0;
    int iAll=0;
    int iCntE=0,iCntO=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]%2==0)
        {
            iCntE++;
        }
        else
        {
            iCntO++;
        }
        iAll=iCntE-iCntO;
    }
    return iAll;
}

int main()
{
    int iValue=0,iRet=0;
    int *ptr=NULL;
    int iCnt=0;
    printf("enter the value for N ");
    scanf("%d",&iValue);
    ptr=(int *)malloc(iValue*sizeof(int));
    printf("enter the values fioeb N");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=FreqChk(ptr,iValue);
    printf("difference is : %d",iRet);
    free(ptr);

    return 0;
}

