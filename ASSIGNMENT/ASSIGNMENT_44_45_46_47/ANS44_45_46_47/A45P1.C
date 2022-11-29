#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
     int iValue=iNo;
    if(iValue>0)
    {
        printf("*\t");
        iValue--;
        Display(iValue);
    }
}

int main()
{
    int iNo=0;
    printf("Enter the value :\n");
    scanf("%d",&iNo);
    Display(iNo);
}
