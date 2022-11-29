///return the frequency of that number in the string

#include<stdio.h>
int Freq(char *str,char ch)
{
    int iCnt=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            iCnt++;                                    //using while loop
        }
        i++;
    }
   /* for (str[i]=0;str[i]<'\0';str[i]++)
    {
        if(str[i]==ch)
        {                                           //using for loop
            iCnt++;
        }
    } */

   /* while(str[i]!=0)
    {
         if(str[i]==ch)
        {
            iCnt++;                                           //using pointer
        }
    }  */

    return iCnt++;
}
int main()
{
    char arr[100];
    char ch='\0';
    printf("Enter the value of string :");
    scanf("%[^\n]s",arr);
    printf("enter the value of caracter : ");
    scanf(" %c",&ch);
    int iRet=0;
    iRet=Freq(arr,ch);
    printf("the of %c is %d",ch,iRet);
    return 0;
}
