/*
2. Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
Input : “Marvellous Infosystems”
“Marvellous Infosystems”
Output : TRUE
*/
#include<stdio.h>
void ChkLen(char *arr,char *brr)
{
    while((*arr!='\0')&&(*brr!='\0'))

    {
        *arr++;
        *brr++;
    }
    if(*arr==*brr)
    {
        printf("TRUE");

    }
    else
    {
        printf("FALSE");
    }


}

int main()

{
    char arr[30];
    char brr[30];

    printf("Enter the first string :");
    scanf("%[^\n]s",arr);

    printf("Enter the second string :");
    scanf(" %[^\n]s",brr);

    ChkLen(arr,brr);

    return 0;
}
