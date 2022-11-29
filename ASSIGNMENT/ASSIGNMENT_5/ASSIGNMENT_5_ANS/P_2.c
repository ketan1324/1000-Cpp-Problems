/*
Write a program which accept one number from user and check whether that
number is greater than 100 or not.
Input : 101
Output : Greater
*/
#include<stdio.h>

typedef int BOOL;
BOOL ChkGreater();

#define TRUE 1
#define FALSE 0

int main()
{
    int iValue=0;
    BOOL bRet=0;
     printf("Enter number: ");
     scanf("%d",&iValue);
     bRet=ChkGreater(iValue);
     if(bRet==TRUE)
     {
         printf("GREAter");
     }
     else
     {
         printf("Smaller");
     }
     return 0;
}

 BOOL ChkGreater(int iNo)
 {
     if(iNo>100)
     {
         return TRUE;
     }
     else
     {
         return FALSE;
     }
 }











