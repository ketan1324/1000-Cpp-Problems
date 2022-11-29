/*
PROBLEM STATEMENT : accept a number from user and print below pattern.
input :5
output: A B C D E

*/

#include<stdio.h>
void Pattern(int);
int main()
{
    int iValue=0;
    printf("enter number : ");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}

void Pattern(int iNo)
{
    int iCnt=65;
    for(iCnt='65';iCnt<=iNo;iCnt++)
    {
        printf("%c\t",(char)iCnt);
    }
}
