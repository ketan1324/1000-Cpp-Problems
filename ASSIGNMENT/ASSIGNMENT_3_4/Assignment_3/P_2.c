//
//problem statement:WAP which accepts number from user and print even factors of that number .
//

#include<stdio.h>
int main()
{
    int iValue=0;
    printf("enter number :");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}
void DisplayFactor(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt==0)&&(iCnt%2==0))
        {
            printf("%d\n",iCnt);
        }
    }
}
