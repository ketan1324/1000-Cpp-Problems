/*
PROBLEN STATEMENT : ACCEPT NUMBER FROM USER AND DISPLAY SUCH NUMBER WHICH ARE DIVISIBLE BY 5 ONLY.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80
*/
/*
                            ALGORITM

            START
                Accept a value for N
                create memory for N blocks
                pass the pointer and the size to the function
                perform the operation
                return the value
            END
*/

#include<stdio.h>
#include<stdlib.h>
#define ERRMEMORY -1
#define ERRMEMORY -2
void DivFive(int arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]%5==0)
        {
            printf("\n\n%d\t",arr[iCnt]);
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
    printf("your entered values are :");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("your problem is being solved : ");
    DivFive(ptr,iValue);
    free(ptr);

    return 0;


}
