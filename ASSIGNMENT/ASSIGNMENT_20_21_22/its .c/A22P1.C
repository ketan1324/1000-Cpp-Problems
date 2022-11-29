/*
PROBLEM STATEMENT : ACCEPT N NUMBERS FROM USERS AND DISPLAY  FREQUENCY OF EVEN NUMBERS
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3
*/
#include<stdio.h>
#include<stdlib.h>
int Freq(int arr[],int iSize)
{
    int iCnt=0,iCnt2=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]%2==0)
        {
            iCnt2++;
        }
    }
    return iCnt2;
}
int main()
{
    int iValue=0,iCnt=0,iRet=0;
    int *ptr=NULL;
    printf("enter the value of N : ");
    scanf("%d",&iValue);
    ptr=(int *)malloc(sizeof(int )*iValue);
    printf("enter the values for N : ");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Freq(ptr,iValue);
    printf("Frequency of even numbers are %d",iRet);
    free(ptr);
    return 0;
}
