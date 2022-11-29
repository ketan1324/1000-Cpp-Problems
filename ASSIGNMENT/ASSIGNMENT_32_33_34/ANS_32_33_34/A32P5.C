
///5 FIRST AND LAST

#include<stdio.h>

void Bit5and18(int iValue)

{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    unsigned int iMask=0X00000001;
    iMask=iMask<<(7-1);
    int iResult=0;
    iResult=iValue&iMask;
    if(iResult==iMask)
    {
        printf("all the bits are turned on : ");
    }
    else
    {
        printf("offf");
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
