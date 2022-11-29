
#include<stdio.h>
#include<stdlib.h>


int Check(int Arr[], int iLength)
{
int iCnt=0,iCnt2=0;
for(iCnt=0;iCnt<iLength;iCnt++)
{
    if(Arr[iCnt]==11)
    {
        iCnt2++;
    }


}
return iCnt2;
}

  int main()
    {


    int iSize = 0,iCnt = 0;
    int *p = NULL;

    int iRet=0;
    printf("Enter number of elements");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    printf("Enter %d elements ",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {

        scanf("%d",&p[iCnt]);
    }

    iRet     = Check(p, iSize);
    printf("%d",iRet);

free(p);
return 0;
}


