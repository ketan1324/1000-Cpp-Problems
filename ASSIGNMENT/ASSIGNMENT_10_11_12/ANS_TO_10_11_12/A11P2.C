/*
2. Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Output : 24 26 28 30 32 34
*/

#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
    int iCount=0;
    for(iCount=iStart;iCount<=iEnd;iCount++)
    {
        if(iCount%2==0)
        {
            printf("%d\n",iCount);
        }
    }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
RangeDisplayEven(iValue1, iValue2);
return 0;
}
