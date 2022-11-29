///check weather  th and 18th bit is off or on

#include<stdio.h>

void Bit5and18(int iValue)

{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iMask=0X00020010;
    int iResult=0;
    iResult=iValue&iMask;
    if(iResult==iMask)
    {
        printf("5th and 18th  bit ios turnes on ");
    }
    else
    {
        printf("15th bit is turnrd off");
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
