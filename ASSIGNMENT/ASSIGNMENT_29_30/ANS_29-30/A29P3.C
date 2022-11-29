///Return the index of the number

#include<stdio.h>
int Index(char *str,char ch)
{
    int i=0,iCnt=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            return i;
        }
        i++;
    }
}
int main()
{
    char arr[100];
    char ch='\0';
    int iRet=0;

    printf("ENter the string : ");
    scanf("%[^\n]s",arr);

    printf("enter the value of CH  :");
    scanf(" %c",&ch);

    iRet=Index(arr,ch);
    printf(" the frequency of of %c is %d ",ch,iRet);
    return 0;
}
