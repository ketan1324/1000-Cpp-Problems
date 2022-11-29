 ///7TH BIT IS TURNED ON OR OFF

#include<stdio.h>
void ChkBit(int iValue)
{
 //   int iMask=0X00000040;
        int iMask=0X00000001;
        iMask=iMask<<(7-1);
    int iResult=0;
    iResult=iValue^iMask;
 /// here we use XOR because the input is 79 decimal number and its binary number is
 ///0000 0000 0000 0000 0000 0000 0100 1111
 ///                               |
 ///                            -->| here seventh bit is on so we make mask
 /// and that mask is a mask where 7th bit is also on so and we have to off the 7 th bit and  this can b
 /// achivesd by XOR coz 1^1 is 0 so we are succesfully able to turn of it.

    printf("iResult is %d",iResult);
}

int main()
{

    int iNo=0;

    printf("Enter the value of N ");
    scanf("%d",&iNo);

    ChkBit(iNo);

    return 0;
}
