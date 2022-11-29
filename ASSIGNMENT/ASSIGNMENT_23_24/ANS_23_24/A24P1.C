/// RETURN THE LARGEST NUMBER FROM THE ARRAY.
/// THIS WAS THE PROBLEM STATEMETNT

#include<stdio.h>
#include<stdlib.h>
int Largest(int arr[],int iValue)

{
    int iCnt=0;
    int iMax=0;
    iMax=arr[0];
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if(arr[iCnt]>iMax)
        {
            iMax=arr[iCnt];
        }

    }
    return iMax;

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
    printf("your entered numbers are");
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    iRet=Largest(ptr,iValue);
    printf("\nthe largest values of all is %d",iRet);
    free(ptr);
    return 0;
}
