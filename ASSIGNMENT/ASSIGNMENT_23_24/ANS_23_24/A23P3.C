/*
3. Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
*/
#include<stdio.h>
#include<stdlib.h>
#define no -1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt=0;
for(iCnt=iLength-1;iCnt>=0;iCnt--)
{
    if(Arr[iCnt]==iNo)
        {
            return iCnt;
    }

}
return -1;
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
                                    iRet=Check(ptr,iValue,iNO);
                                    printf("\n on the number of cnt your is present %d",iRet);
                                free(ptr);
                                return 0;

                                }
