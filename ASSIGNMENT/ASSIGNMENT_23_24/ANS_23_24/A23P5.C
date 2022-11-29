#include<stdio.h>
#include<stdlib.h>
#define no -1
#define FALSE 0
typedef int BOOL;
int Check(int Arr[], int iLength)
{
    int iCnt=0;
    int iDigit=1;
for(iCnt=0;iCnt<iLength;iCnt++)
{
    if(Arr[iCnt]%2!=0)
        {
            iDigit=iDigit*Arr[iCnt];
        }
        if(Arr[iCnt]%2==0)  /// this confdition is for if all elements are even then multiplication would be zero because no odd digit is presnt so

            {
            return 0;
            }



}
return iDigit;
}
int main()
{
                            int iValue=0;
                            int *ptr=NULL;

                            int  iRet = 0;


                            printf("enter the value for N :");
                            scanf("%d",&iValue);


                            ptr=(int *)malloc(iValue*sizeof(int));

                            if(ptr == NULL)
                                {
                                printf("Unable to allocate memory");
                                return -1;
                                }



                                printf("enter the values of N for %d times ",iValue);


                                int iCnt=0;
                                for(iCnt=0;iCnt<iValue;iCnt++)
                                {
                                    scanf("%d",&ptr[iCnt]);
                                }

                                printf("your entered numbers are :");
                                for(iCnt=0;iCnt<iValue;iCnt++)
                                {
                                    printf("%d\t",ptr[iCnt]);

                                }
                                    iRet=Check(ptr,iValue);
                                    printf("\nmultiplication is  %d",iRet);
                                free(ptr);
                                return 0;

                                }

