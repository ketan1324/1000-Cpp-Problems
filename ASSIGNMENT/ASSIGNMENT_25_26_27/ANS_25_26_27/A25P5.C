/*
5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/
#include<stdio.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0
void  Check(int iValue)
{
    if(iValue==65 ||iValue==97 )
    {
        printf("Your exam is at 7 Am");
    }
    else if(iValue==66 ||iValue==98 )
    {
        printf("Your exam is at 8:30 Am");
    }
    else if(iValue==67 ||iValue==99 )
    {
        printf("Your exam is at 9:20 Am");
    }
    else if(iValue==68 ||iValue==99 )
    {
        printf("Your exam is at 10:30 Am");
    }
    else
    {
        printf("this division in avaible inour school u cant study any where in whole world ");
    }
}
int main()
{
    char iValue ='0';

    printf("enter the value : ");
    scanf("%c",&iValue);
    Check(iValue);

    return 0;
}
