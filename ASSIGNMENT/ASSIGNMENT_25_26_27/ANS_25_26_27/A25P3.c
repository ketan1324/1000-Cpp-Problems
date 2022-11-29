/*
3. Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
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
    if(iValue>=48 &&iValue<=57 )
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
        printf("the given alphabet is NUMERICAL letter");
    }
    else
    {
        printf("the given alphabet iS  NOT  NUMERICAL letter");
    }
    return 0;
}

