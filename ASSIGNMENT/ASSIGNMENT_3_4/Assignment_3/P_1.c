//
//problem statement:WAP which accept a number from user and print that number st even numbers on screen.
//

//input:7
//Output: 2 4 6 8 10 12 14
#include<stdio.h>
 int main()
 {
     int iValue=0;
     printf("enter number: ");
     scanf("%d",&iValue);
     PrintEven(iValue);
     return 0;
 }

 void PrintEven(int iNo)
 {
     int iCnt=1;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        printf("%d",iCnt*2);
    }


 }
