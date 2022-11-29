///3. Write a program which checks whether 7th & 15th & 21st , 28th bit
///is On or OFF.


#include<stdio.h>

void Bit5and18(int iValue)

{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iMask=0X08104040;
    int iResult=0;
    iResult=iValue&iMask;
    if(iResult==iMask)
    {
        printf("all bits are on : ");
    }
    else
    {
        printf("any of the bit or all the bits are of:");
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
