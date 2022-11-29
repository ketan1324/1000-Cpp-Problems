///1.Write a program which accept one number and position from user and
/*check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/


#include<stdio.h>
void BitChk(int iValue,int iPos)
{
    int iMask=0X00000001;
    iMask=iMask<<(iPos-1);
    int iResult=0;

    iResult=iValue&iMask;

    if(iResult==iMask)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("bit is OFF");
    }
}
int main()
{
    int iNo=0;
    int iPos=0;

    printf("Enter the number :");
    scanf("%d",&iNo);

    printf("Enter the position :");
    scanf("%d",&iPos);

    BitChk(iNo,iPos);
    return 0;
}

