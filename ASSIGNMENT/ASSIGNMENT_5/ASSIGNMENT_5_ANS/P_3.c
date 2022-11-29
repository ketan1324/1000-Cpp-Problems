/*
3. Write a program which accept two numbers and check whether numbers are
equal or not.
Input : 10 10
Output : Equal

*/
#include<stdio.h>

typedef int BOOL;


#define TRUE 1
#define FALSE 0
BOOL ChkEqual(int,int);

int main()
{
    int iValue1=0;
    int iVAlue2=0;
    BOOL bRet=0;
     printf("Enter number: ");
     scanf("%d %d",&iValue1 , &iVAlue2);
     bRet=ChkEqual(iValue1,iVAlue2);
     if(bRet==TRUE)
     {
         printf("EQUAL");
     }
     else
     {
         printf("NOT EQUAL");
     }
      return 0;
}

BOOL ChkEqual(int im1,int im2)
{

    if(im1==im2)
    {
        return TRUE;
    }
    else{return FALSE;}
}
