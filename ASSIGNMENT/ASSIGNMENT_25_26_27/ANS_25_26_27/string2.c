#include<stdio.h>

int main()
{
    char str1[]="Hello";
    char str2[10];
    char *s="Good morning ";
    char *q;
    q=s;
    q=&str1;
    printf("printing q : %s",q);
}
