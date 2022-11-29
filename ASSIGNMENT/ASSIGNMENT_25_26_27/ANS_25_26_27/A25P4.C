/*
4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0
BOOL Check(int iValue)
{
    if(iValue>=97 &&iValue<=122 )
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
    char iValue ='0';
    BOOL bRet=FALSE;
    printf("enter the value : ");
    scanf("%c",&iValue);
    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf("the given alphabet is SMALL CASE  letter");
    }
    else
    {
        printf("the given alphabet iS  NOT SMALL CASE letter");
    }
    return 0;
}
