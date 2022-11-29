#include<stdio.h>>
#include<stdlib.h>

void Display()
{
static char a=65;
if(a!=71)
{
    printf("%c\t",a);
    a++;
    Display();
}
}
int main()
{
Display();
return 0;
}
