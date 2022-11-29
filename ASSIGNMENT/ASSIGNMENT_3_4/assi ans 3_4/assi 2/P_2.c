//
//2.Write a program which accept number from user and display its factors in
//decreasing order.
//

#include<stdio.h>
void FactRev(int);
int main()
{
    int iValue=0;
    printf("enter number : ");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}
void FactRev(int iNo)
{
    int iCnt=2;
    for(iCnt<=iNo/2;iCnt>=2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d",iCnt);
        }
    }
}
//i am not able to apply logic.
