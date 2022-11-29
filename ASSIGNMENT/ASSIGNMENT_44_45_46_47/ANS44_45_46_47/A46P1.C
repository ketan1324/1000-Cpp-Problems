#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    if(iNo>0)
    {
        printf("%d\t",iNo);
        printf("*\t");
        Display(--iNo);

    }
}
int main()
{
    int iNo=0;
    printf("Enter the number :");
    scanf("%d",&iNo);
    Display(iNo);
}
