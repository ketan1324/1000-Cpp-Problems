#include<stdio.h>
#include<stdlib.h>
int Display(int iN)
{static int iMax=0;
int iRem=0;
    if(iN!=0)
    {
        iRem=iN%10;
        if(iRem>iMax)
        {
            iMax=iRem;
        }
        Display(iN=iN/10);
    }
    return iMax;
}
int main()
{
   long  int iNo=0;
   printf("Ente rthr gwndoirnfhwef :\n");
   scanf("%ld",&iNo);
   int iRet=0;
   iRet=Display(iNo);
   printf("%d",iRet);
   return 0;
}
