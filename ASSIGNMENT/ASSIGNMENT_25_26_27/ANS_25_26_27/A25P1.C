/*
1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
*/

#include<stdio.h>
#include<stdlib.h>
typedef  int BOOL;
#define TRUE 1
#define FALSE 0
BOOL AlphaCheck(char  iValue)
{
    if(((iValue>=65) &&(iValue<=90))||((iValue>=97)&&(iValue<=122)) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char iValue='0';
    BOOL bRet=FALSE;
    printf("Enter the value :");
    scanf("%c",&iValue);
    bRet=AlphaCheck(iValue);
    if(bRet==TRUE)
    {
        printf("yes !! the given value is Alphate ");
    }
    else
    {
        printf("no!! the given alphabet is not alphabet");
    }
    return 0;
}
