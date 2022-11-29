#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
     int iValue=iNo;
    static int a=1;
    if(a<=iValue)
    {
        printf("%d\t",a);
        a++;
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

