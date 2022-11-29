
#include<stdio.h>
#include<stdlib.h>
void  Display(int iN)
{

int iRem=0;
    if(iN!=0)
    {
        iRem=iN%10;
        printf("%d",iRem);
       Display(iN=iN/10);
    }
   }
int main()
{
   long  int iNo=0;
   printf("Ente rthr gwndoirnfhwef :\n");
   scanf("%ld",&iNo);
   int iRet=0;
   Display(iNo);

   return 0;
}

