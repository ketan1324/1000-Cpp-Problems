#include<stdio.h>
#include<stdlib.h>
void Display()
{
   static  int iNo=1;
    if(iNo<=5)
    {
        printf("*\t");
        iNo++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}
