/*
4. Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
*/

#include<stdio.h>
double FhtoCs(float fTemp)
{
double dCelcius=0;
dCelcius=((fTemp-32)*5/9);
return dCelcius;
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("ENTER VALUE");
scanf("%f",&fValue);

dRet = FhtoCs(fValue);
printf("in celciuys it is %lf",dRet);

return 0;
}
