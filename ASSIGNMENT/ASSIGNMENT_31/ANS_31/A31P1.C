///REVERSE A STRING

#include<stdio.h>
void StrRev(char *arr,char *brr)
{
    int  Temp=0,Start=0,End=0;
    int i=0;
    while(arr[End]!='\0')
    {
        End++;
        i++;
          }
    End--;



    while(Start<End)
    {

       Temp=arr[Start];
       arr[Start]=arr[End];
       arr[End]=Temp;

       Start++;
       End--;
    }

    while(brr[i]!='\0')
    {
        brr[i]=arr[i];
        i++;
    }
}
int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the first string\n");
    scanf("%[^\n]s",arr);

    StrRev(arr,brr);

    printf("reverse string in the second string is \n%s",arr);

    return 0;
}
