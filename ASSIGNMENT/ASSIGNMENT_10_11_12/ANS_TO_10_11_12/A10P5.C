/*
5. Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
*/

#include<stdio.h>
double SquareMeter(int iValue)
{
    double dSMetre=0;
    dSMetre=((1/0.0929)*iValue);
}
int main()
{
int iValue = 0;
double dRet = 0.0;
printf("Enter area in square feet");
scanf("%d",&iValue);
dRet = SquareMeter(iValue);
printf("square to metre is %llf : ",dRet);
return 0;
}

//getting error while run time #nano.
