/*

*/
/*
3.Write a program which accept one number and position from user and off
that bit. Return modified number.
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
    int iNo=0;
    int iPos=0;

    printf("Enter the number :");
    scanf("%d",&iNo);

    printf("Enter the position");
    scanf("%d",&iPos);

    BitChk(iNo,iPos);

    return 0;
}



