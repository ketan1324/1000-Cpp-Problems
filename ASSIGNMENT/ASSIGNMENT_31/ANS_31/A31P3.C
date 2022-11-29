///CONVERT SMALL CASE TO CAPITAL AND PRINT IT IN ANOTHER STRING

#include<stdio.h>
void StrCap(char *arr,char *brr)
{
    int i=0,j=0;
    while(arr[i]!='\0')
    {
        if(arr[i]>='a'&& arr[i]<='z')
        {
           *brr=*arr-32;
        }
        else
        {
            *brr=*arr;
        }
        arr++;
        brr++;
    }
    *brr='\0';
}
int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the first string :");
    scanf("%[^\n]s",arr);

    StrCap(arr,brr);

    printf("in string brr \n%s",brr);
    return 0;
}
