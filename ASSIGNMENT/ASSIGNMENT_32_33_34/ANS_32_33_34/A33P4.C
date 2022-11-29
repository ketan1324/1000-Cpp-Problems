///toggle the 7th bit  and return the number


#include<stdio.h>
void BitChk(int iValue)
{
    int iMask=0X00000001;
    iMask=(  (iMask<<(7-1))  |  (iMask<<(10-1))) ; //|  (iMask<<(3-1))  |  (iMask<<(4-1))  );
    int iResult=0;
    iResult=iValue^iMask;
    printf("%d",iResult);
}

int main()
{
    int iNo=0;

    printf("enter the number ");
    scanf("%d",&iNo);

    BitChk(iNo);

    return 0;
}




