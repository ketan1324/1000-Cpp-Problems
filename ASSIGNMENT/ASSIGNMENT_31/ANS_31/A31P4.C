

///ACCEPT A STRING FROM USER AND PRINT STRING INTO ANOTHER WIT ALL SMALL CASES


#include<stdio.h>
/*void StrSmall(char *str,char *dest)
{
    int i=0;
    while(str[i]!='\0')
    {
        if((str[i]>='A')&&(str[i]<='Z'))
        {
            *dest=*str+32;
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

    printf("Enter the string one \n");
    scanf("%[^\n]s",arr);


    StrSmall(arr,brr);

    printf("\n%s",brr);
    return 0;

}*/

void StrCap(char *arr,char *brr)
{
    int i=0,j=0;
    while(arr[i]!='\0')
    {
        if(arr[i]>='A'&& arr[i]<='Z')
        {
           *brr=*arr+32;
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

