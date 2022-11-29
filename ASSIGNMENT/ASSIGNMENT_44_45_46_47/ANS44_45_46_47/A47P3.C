#include<stdio.h>
#include<stdlib.h>
int Display(char str[])

{
   static int iCnt=0;
   int i=0;
   for(i=0;i<='\0';i++)
   {
       printf("the sting is %s",str[i]);
   }

        return iCnt;

}
int main()
{
    char arr[300];
    printf("Enter the characters :\n");
    scanf("%[^\n]s");
    int iRet=0;
    iRet=Display(arr);

    printf("%d",iRet);
    return 0;
}
