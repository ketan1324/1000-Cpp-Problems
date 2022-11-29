#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int a=iNo;
if(a>0)
{
    printf("%d\t",a);
    a--;
    Display(a);
}
}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
Display(iValue);
return 0;
}
