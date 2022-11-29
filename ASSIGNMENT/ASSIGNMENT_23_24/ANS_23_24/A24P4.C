///print three digits number from the array
#include<stdio.h>
#include<stdlib.h>
void Largest(int arr[],int iValue)

{
    int iCnt=0;
    int iMax=0;
    iMax=arr[0];
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        if((arr[iCnt]/1000==0)&&(arr[iCnt]/100!=0)&&(arr[iCnt]/10!=0))
        {
            printf(" the numbers from array which contains three digit are : %d\n",arr[iCnt]);
        }

    }


}
int main()
{
    int iValue=0;
    int iCnt=0;
    int iRet=0;
    int *ptr=NULL;
    printf("Enter the Value of N :");
    scanf("%d",&iValue);
    ptr=(int *)malloc(iValue*sizeof(int ));
    printf("Enter the numbers : ");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }

    Largest(ptr,iValue);

    free(ptr);
    return 0;
}
