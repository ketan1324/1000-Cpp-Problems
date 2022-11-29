/*
3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include<stdio.h>
int CountCapital(char *str)
{
int iCnt = 0;
int iFreqS=0;
int iFreqC=0;

//while(str[iCnt] != '\0')
for(iCnt=0;iCnt<str[iCnt];iCnt++)
{
    if(str[iCnt]>=65&&str[iCnt]<=90)
    {
        iFreqC++;
    }
    if(str[iCnt]>=97&&str[iCnt]<=122)
    {
        iFreqS++;
    }
}
return iFreqS-iFreqC;
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
