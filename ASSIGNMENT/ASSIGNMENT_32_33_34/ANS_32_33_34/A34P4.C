/*
4. Write a program which accept one number and position from user and
toggle that bit. Return modified number.
Input : 10 3
Output : 14
*/
#include<stdio.h>
void BitChk(int iNo,int iPos)
{
    int iMask=0X00000001;
    iMask=iMask<<(iPos-1);
    int iResult=0;
    iResult=iNo^iMask;
    printf("%d",iResult);
}
int main()
{
    int iNo,iPos;
    printf("ENter the value of number \n");
    scanf("%d",&iNo);

    printf("ENter the value of position \n");
    scanf("%d",&iPos);


    BitChk(iNo,iPos);

    return 0;
}
