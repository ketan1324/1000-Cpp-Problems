//
//5. Accept on character from user and check whether that character is vowel
//(a,e,i,o,u) or not
//
#include<stdio.h>

typedef int BOOL;
int CV(char);

#define TRUE 1
#define FALSE 0
int main()
{
    char cValue='0';
    BOOL bRet=FALSE;
    char ret=0;
    printf("Enter charcter: ");
    scanf("%c",&cValue);
    bRet=CV(cValue);
    if(bRet==TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    return 0;
}

int CV(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        return TRUE;
    }
    else{return FALSE;}
}
