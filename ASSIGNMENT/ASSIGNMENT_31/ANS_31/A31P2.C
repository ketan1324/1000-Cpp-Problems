///REMOVE THE WHITE SPACES IN THE STRING AND PRINT THE STRING COPIES ONE

#include<stdio.h>
void StrSpace(char *str,char *dest)
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=32)
        {
            dest[j]=str[i];
            j++;
        }
        i++;
    }
}
int main()
{
    char arr[30];
    char brr[30];

    printf("enter the first string \n");
    scanf("%[^\n]s",arr);

    StrSpace(arr,brr);
    printf("%s",brr);
    return 0;
}
