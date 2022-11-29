/// THIS IS PRIGRAM 5 FOR ASSIGNMENT 24
///PROBLEM STATEMENT IS TO RETRN THE SUMMATION OF DIGITIS OF NUMBERS OF EACH NUMBER IN array

#include<stdio.h>
#include<stdlib.h>
void SumDigi(int arr[],int iValue)
{
    int iCnt=0;
    int iDigit=0;
    int iSum=0;
    int iCnt2=0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
         iSum=0;

        for(iCnt2=0;iCnt2<=arr[iCnt];iCnt2++)
        {


         iDigit=arr[iCnt]%10;
        iSum=iSum+iDigit;
        arr[iCnt]=arr[iCnt]/10;


        }
            printf("the addition of digits is %d\t",iSum);


    }


}
int main()
{
    int iValue=0;
    int *ptr=0;
    printf("Enter the Number the N :");
    scanf("%d",&iValue);
    ptr=(int *)malloc(iValue*sizeof(int));
    printf("enter the values of N :");
    int iCnt=0;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }
    SumDigi(ptr,iValue);
    free(ptr);
    return 0;
}
