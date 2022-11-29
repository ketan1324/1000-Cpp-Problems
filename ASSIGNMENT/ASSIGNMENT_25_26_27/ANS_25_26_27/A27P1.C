/*
1.Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/
#include<stdio.h>
int CountCapital(char *str)
{
int iCnt = 0;
int iFreq=0;

//while(str[iCnt] != '\0')
for(iCnt=0;iCnt<str[iCnt];iCnt++)M
{
    if(str[iCnt]>=65&&str[iCnt]<=90)
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
