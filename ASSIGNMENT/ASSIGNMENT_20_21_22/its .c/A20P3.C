#include<stdio.h>
#include<stdlib.h>
void Fess(int iValue)
{
    int iCnt=0;
    if(iValue<0)
    {
        return;
    }
    if(iValue==1)
    {
            printf("the fees for standard %d is 8900 ",iValue);
    }
        else if(iValue==2)
        {
                printf("the fees for standard %d is 12790",iValue);
        }
        else if(iValue==3)
        {
                printf("the fees for standard %d is 21000",iValue);
        }
        else if(iValue==4)
        {
                printf("the fees for standard %d is 23450",iValue);
        }
        else
        {
                printf(" the standard you entered is not avaible in school ");
        }
}

int main()
{


    int iValue=0;
    printf("enter the value  school fees: ");
    scanf("%d",&iValue);
    int iRet=0;
    Fess(iValue);

    return 0;
}
///some problem is there
