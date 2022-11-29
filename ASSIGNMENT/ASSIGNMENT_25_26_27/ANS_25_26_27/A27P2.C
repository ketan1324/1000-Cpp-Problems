/*
2. Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9
*/

#include<stdio.h>
int CountCapital(char *str)
{
int iCnt = 0;
int iFreq=0;

//while(str[iCnt] != '\0')
for(iCnt=0;iCnt<str[iCnt];iCnt++)
{
    if(str[iCnt]>=97&&str[iCnt]<=122)
    {
        iFreq++;
    }
}
return iFreq;
}
int main()
{
char arr[20];
int iRet = 0;
printf("Enter string");
scanf("%[^\n]s",arr);
iRet = CountCapital(arr);
printf("%d",iRet);
return 0;
}
