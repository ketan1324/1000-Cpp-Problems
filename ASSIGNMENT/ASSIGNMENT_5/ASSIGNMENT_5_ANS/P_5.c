/*
5. Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000 745
Output : 74.5%
*/

#include<stdio.h>
float ChkPer(int m1,int m2);

int main()
{
    int iValue1=0;
    int iVAlue2=0;
    float fRet=0;
     printf("Enter number: ");
     scanf("%d %d",&iValue1 , &iVAlue2);
      fRet=ChkPer(iValue1,iVAlue2);
       printf("percentage is:  %f ",fRet);

       return 0;

}
float ChkPer(int m1,int m2)
{
    float fper=0.0;
    fper=(m2%m1s*100);
    return fper;
}

