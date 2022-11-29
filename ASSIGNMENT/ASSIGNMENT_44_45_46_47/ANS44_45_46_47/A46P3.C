#include<stdio.h>
#include<stdlib.h>
int Display(char *str)

{
    static int iCnt=0;
        if(*str!='\0')
        {
            iCnt++;
            Display(++str);
        }
        return iCnt;
}
int main()
{
    char arr[30];
    printf("Enter the string :");
    scanf("%s",arr);
    int iRet=0;
    iRet=Display(arr);
    printf("%d",iRet);

}
