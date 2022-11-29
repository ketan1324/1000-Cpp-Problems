///problem statement :  check weather number is resent or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkChar(char str[],char ch)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return TRUE;
            break;

        }
        else
        {
            return FALSE;
        }
        i++;

    }

}
int main()
{

    char arr[30];
    char ch;
    BOOL bRet=FALSE;
    printf("enter the string   :");
    scanf("%[^\n]s",arr);

    printf("enter the value of ch   : ");
    scanf(" %c",&ch);

    bRet=ChkChar(arr,ch);
    if(bRet==TRUE)
    {
        printf("---------found------");
    }
    else
    {
        printf("---------not found---------  ");
    }
    return 0;
}
