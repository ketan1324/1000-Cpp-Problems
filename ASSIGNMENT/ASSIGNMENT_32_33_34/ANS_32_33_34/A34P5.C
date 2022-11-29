#include<stdio.h>
void BitChk(int iNo)
{
    int iMask=0XF000000F;
  //  iMask=iMask<<( (0)| (1)| (2)| (3)|  (30)| (31)|(32)|(33));
    int iResult=0;
    iResult=iNo^iMask;
    printf("%d",iResult);
}
int main()
{
    int iNo,iPos;

    printf("Enter the number \n");
    scanf("%d",&iNo);



    BitChk(iNo);

    return 0;
}
