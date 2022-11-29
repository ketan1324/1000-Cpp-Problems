///CHECK AND TURN OFF THE 7TH AND 10TH BIT OF THE NUMBER

#include<stdio.h>
 void ChkBit(int iValue)
{
    int iMask=0X00000240;

    int iResult=0;
    iResult=iValue^iMask;
    printf("%d",iResult);
}
int main()
{
    int iNo=0;

    printf("ENter the number  ");
    scanf("%d",&iNo);

    ChkBit(iNo);

    return 0;
}
