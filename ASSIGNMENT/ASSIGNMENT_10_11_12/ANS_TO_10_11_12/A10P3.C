/*
3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
*/

#include<stdio.h>
int KMtoMeter(int iValue)
{
int iMetre=1;
iMetre=1000*iValue;
return iMetre;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter value ");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("CONVERSION IN METRE IS : %d",iRet);
return 0;
}

