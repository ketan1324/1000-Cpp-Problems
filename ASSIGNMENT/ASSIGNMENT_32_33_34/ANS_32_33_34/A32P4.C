///7 8 9 BIT

#include<stdio.h>

void Bit5and18(int iValue)

{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iMask=0X000001C0;
    int iResult=0;
    iResult=iValue&iMask;
    if(iResult==iMask)
    {
        printf("alll bits are turnes on : ");
    }
    else
    {
        printf("any one of the or all of the bits are off :");
    }
}
int main()
{
    int iNo=0;

    printf("Enter the value of no :");
    scanf("%d",&iNo);

    Bit5and18(iNo);

    return 0;

}

