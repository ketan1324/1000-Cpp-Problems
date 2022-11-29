/*
4. Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
*/
#include<stdio.h>
int CountCapital(char *str)
{
int iCnt = 0;
int iFreq=0;

//while(str[iCnt] != '\0')
for(iCnt=0;iCnt<str[iCnt];iCnt++)
{
    if(str[iCnt]=='A'||str[iCnt]=='E'||str[iCnt]=='I'||str[iCnt]=='O'||str[iCnt]=='U'||str[iCnt]=='a'||str[iCnt]=='e'||str[iCnt]=='i'||str[iCnt]=='o'||str[iCnt]=='u')
    {
        printf("TRUE\t");
    }
    else
    {printf("NOO NOT PRESENT\t");}

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
