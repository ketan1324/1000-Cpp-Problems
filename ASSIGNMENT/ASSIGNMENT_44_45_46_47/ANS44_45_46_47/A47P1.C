#include<stdio.h>
#include<stdlib.h>
int Display(char *str)
{static int i;
     static int iCnt=0;
if(*str!='\0')
{
        if(*str==' ')
        {s
            iCnt++;

            }

         Display(++str);
        return iCnt;
}
}
int main()
{
    char arr[30];
    printf("ENter the string :\n");
    scanf("%[^\n]s",arr);
    int iRet;
    iRet=Display(arr);
    printf("%d",iRet);
    return 0;
}
