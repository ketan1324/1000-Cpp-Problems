///copy one string into another and print the string

#include<stdio.h>
void StrCpyX(char *arr,char *brr)
{
    int i=0,iCnt=0;
    while(arr[i]!='\0')
    {
        *brr=*arr;
        arr++;
        brr++;
    }
   // printf("the copied string is %s",brr);
   *brr='\0';

}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  ///empty string ;
    StrCpyX(arr,brr);
    printf("\n in the main\t %s",brr);
}
///not printing in function and unusal char
