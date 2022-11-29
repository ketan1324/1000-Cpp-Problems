/*
PROBLEM STATEMENT : accept N numbers from user and also take one input from user and return true if that NO is present on that array

*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt=0;
for(iCnt=0;iCnt<iLength;iCnt++)
{
    if(Arr[iCnt]==iNo)
        {
            return TRUE;
    }

}
return FALSE;
}
int main()
{
                            int iValue=0;
                            int *ptr=NULL;

                            BOOL bRet = FALSE;


                            printf("enter the value for N :");
                            scanf("%d",&iValue);


                            ptr=(int *)malloc(iValue*sizeof(int));

                            if(ptr == NULL)
                                {
                                printf("Unable to allocate memory");
                                return -1;
                                }


                                printf("enter the value for NO :");
                                int iNO=0;
                                scanf("%d",&iNO);
                                printf("enter the values of N for %d times ",iValue);


                                int iCnt=0;
                                for(iCnt=0;iCnt<iValue;iCnt++)
                                {
                                    scanf("%d",&ptr[iCnt]);
                                }

                                printf("your entered numbers are :");
                                for(iCnt=0;iCnt<iValue;iCnt++)
                                {
                                    printf("%d",ptr[iCnt]);

                                }
                                    bRet=Check(ptr,iValue,iNO);
                                    if(bRet == TRUE)
                                {
                                printf("\nNumber is present");
                                }
                                else
                                {
                                printf("\nNumber is not present");
                                }
                                free(ptr);
                                return 0;

                                }
