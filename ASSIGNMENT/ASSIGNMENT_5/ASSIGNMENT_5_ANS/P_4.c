/*
Write a program which accept three numbers and print its multiplication
*/
#include<stdio.h>
int Multiply(int m1,int m2,int m3);
int main()
{
    int iValue1=0;
    int iVAlue2=0;
    int iVAlue3=0;
    int iRet=0;
     printf("Enter number: ");
     scanf("%d %d %d",&iValue1 , &iVAlue2 , &iVAlue3);
     iRet=Multiply(iValue1 ,iVAlue2 ,iVAlue3);
     printf("Multiplication is %d",iRet);
     return 0;
}

int Multiply(int m1,int m2,int m3)
{
    int mret=0;
    //if()  i can do handle the case of zero but now time is not permiting me to do so
    mret=m1*m2*m3;
    return mret;
}
