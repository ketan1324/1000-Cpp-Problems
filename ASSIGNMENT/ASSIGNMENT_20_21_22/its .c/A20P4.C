#include<stdio.h>
#include<stdlib.h>
float CalculateRun(int iSize)
{   float fLessH=0.0;
float fGreatH=0.0;
int iDigit=0;
    if(iSize<100)
    {
        fLessH=iSize*25;
        return fLessH;
    }
    else if(iSize>100)
    {
        iDigit=iSize-100;
            fGreatH=((iDigit*15)+(100*25));
            return fGreatH;
    }
    else{return 0;}
}
int main()
{
    int iValue=0;
    float fRet=0;
    printf("Enter the number of kilometres the car has run :");
    scanf("%d",&iValue);
    fRet=CalculateRun(iValue);
    printf("the total bill for kilometers %d id %f",iValue,fRet);
        return 0;
}
