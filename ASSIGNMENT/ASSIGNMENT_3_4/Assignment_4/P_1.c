//
//1.Write a program which accept number from user and display its multiplication of
//factors.
//

#include<stdio.h>
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet=MultiFact(iValue);
    printf("%d",iRet);
    return 0;
}
  int MultiFact(int iNo)
  {
      int iCnt=0;
      int iMulti=1;
      if(iNo<=0)
      {
          iNo=-iNo;
      }
      for(iCnt=1;iCnt<=iNo/2;iCnt++)
      {
          if(iNo%iCnt==0)
          {
              iMulti=iMulti*iCnt;
          }
      }
      return iMulti;
  }
