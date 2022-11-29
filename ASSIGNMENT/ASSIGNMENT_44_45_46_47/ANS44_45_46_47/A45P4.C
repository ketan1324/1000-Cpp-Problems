#include<stdio.h>
#include<stdio.h>
void Display(int iNo)
{

 static char a='A';
if(iNo!=0)
{
    printf("%c\t",a);
    a++;

    Display(--iNo);


    return;
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
