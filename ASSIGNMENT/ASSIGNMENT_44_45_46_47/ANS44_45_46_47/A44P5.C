
#include<stdio.h>>
#include<stdlib.h>

void Display()
{
static char a=97;
if(a!=103)
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
