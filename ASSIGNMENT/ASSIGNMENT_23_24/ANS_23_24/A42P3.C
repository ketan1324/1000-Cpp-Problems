///TO RETURN THE DIFFERENCE BETWEEN LARGEST AND SMALLEST NUMBER IN THE ARRAY


#include<stdio.h>
#include<stdlib.h>
int Largest(int arr[],int iValue)

{
    int iStart=0;
    int iEnd=0;

    int iMax=arr[0];
    int iMin=arr[0];
    for(iStart=0;iStart<iValue;iStart++)
    {
        if(arr[iStart]>iMax)
        {
            iMax=arr[iStart];
        }
        if(arr[iStart]<iMin)
        {
            iMin=arr[iStart];
        }


    }
    /* for(iEnd=iValue-1;iEnd<iValue;iEnd--)
    {
        if(arr[iEnd]<iMin)
        {
            iMin=arr[iEnd];
        }

    }*/

    return iMax-iMin;

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
