/*
problem statement:progamm to divide two number.
*/
//////////////////////////////////////
//function:Divide
//
//parameters:Integers
//
//return value:Integers
//
//description: does the division of two numbers.
//
//author:KETAN MAHESH DOSHI
//
//date:- 24 july 2020
/////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
        int iAns=0;
        if(iNo2==0)
        {
            return -1;
        }
        iAns=iNo1/iNo2;
        return iAns;
}

    int main()
    {

        int iValue1=15,iValue2=5;
       int  iRet=0;
        iRet=Divide(iValue1,iValue2);
        printf("Division is %d",iRet);
        return 0;
    }


