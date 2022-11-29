#include<stdio.h>
void StrChange(char *str,char *dest)
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            *dest=*str+32;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            *dest=*str-32;
        }
        else
        {
            *dest=*str;
        }
        i++;
    }
    *dest='\0';
}
int main()
{
    char arr[30];
    char brr[30];

    printf("ENter the first string :");
    scanf("%[\n]s",arr);

    StrChange(arr,brr);
    printf("the string in brr is %s",brr);
    return 0;
}
