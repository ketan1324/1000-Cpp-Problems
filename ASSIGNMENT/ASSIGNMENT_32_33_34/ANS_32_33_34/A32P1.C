/// accpet a number from user and check weather 15th bit is on or off


#include<stdio.h>
void Bit15(int iValue)

{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iMask=0X00004000;
    int iResult=0;
    iResult=iValue&iMask;
    if(iResult==iMask)
    {
        printf("15th bit ios turnes on ");
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

    Bit15(iNo);

    return 0;

}
