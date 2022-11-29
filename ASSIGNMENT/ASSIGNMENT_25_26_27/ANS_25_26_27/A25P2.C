/*
2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0
BOOL Check(int iValue)
{
    if(iValue>=65 &&iValue<=90 )
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
        printf("the given alphabet is CAPITAL letter");
    }
    else
    {
        printf("the given alphabet iS  NOT  CAPITAL letter");
    }
    return 0;
}
