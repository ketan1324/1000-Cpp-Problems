/*
5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/

#include<stdio.h>
void BitChk(int iValue)
{
    int iMask=0X0000000F;
   // iMask=(  (iMask<<(2-1))  | (iMask<<(3-1)) |  (iMask<<(4-1))  | (iMask<<(5-1))  );
    int iResult=0;
    iResult=iValue|iMask;
    printf("%d",iResult);
}

int main()
{
    int iNo=0;

    printf("enter the number ");
    scanf("%d",&iNo);

    BitChk(iNo);

    return 0;
}


