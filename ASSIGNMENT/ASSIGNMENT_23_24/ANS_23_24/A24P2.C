/// return the smallest number from the array

#include<stdio.h>
#include<stdlib.h>
int Smallest(int arr[],int iValue)
{
    int iCnt=0;
    int iMin=arr[0];
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        if(arr[iCnt]<iMin)
        {
            iMin=arr[iCnt];
        }


    }
    return iMin;
}
int main()
{
    int iValue=0;
    int iCnt=0;
    int iRet=0;
    int *ptr=NULL;
    printf("Enter the value of N :");
    scanf("%d",&iValue);
    ptr=(int *)malloc(iValue*sizeof(int ));
    printf("Enter the array numbers : ");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Smallest(ptr,iValue);
    printf("%d is the smallest number of ALL",iRet);
    return 0;
}
