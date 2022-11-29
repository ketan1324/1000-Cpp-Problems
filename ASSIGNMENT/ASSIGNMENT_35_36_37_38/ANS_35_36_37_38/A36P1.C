/*

1. Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
Input : “Marvellous Infosystems”
“Logic Building”
5
Output : “Marvellous Infosystems Logic”
*/

#include<stdio.h>
void ConCatinate(char *arr,char *brr,int iNo)
{
    int i=0,j=0;
    while(*arr!='\0')
    {
        *arr++;
    }
    *arr=' ';
    *arr++;

    while((*brr!='\0')&&(iNo!=0))
    {
        *arr=*brr;
        iNo--;
        *arr++;
        *brr++;
    }
    *arr='\0';
}
int main()
{
    char arr[30];
    char brr[30];
    int iNo=0;

    printf("Enter the first string :");
    scanf("%[^\n]s",arr);

    printf("Enter the second string :");
    scanf(" %[^\n]s",brr);

    printf("Enter the number :");
    scanf(" %d",&iNo);

    ConCatinate(arr,brr,iNo);

    printf("the concatinated string is %s",arr);

    return 0;
}
