// if we a number which should be divisible by 3 and 5 then directly see waether it is divisible by 15



#include<stdio.h>
#include<stdlib.h>

void DivFive(int arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]%15==0)
        {
            printf("%d\t",arr[iCnt]);
        }
    }
}

int main()
{
    int iValue=0,iCnt=0,*ptr=NULL;
    printf("enter the value for N ");
    scanf("%d",&iValue);
    if(iValue<=0)
    {
        printf("Error : undefined memory for value of N ");

    }
    ptr =(int *)malloc(iValue*sizeof(int));
    printf("Enter the the values for N :");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    DivFive(ptr,iValue);
    free(ptr);

    return 0;


}
