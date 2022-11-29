/*
1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output :
* * *
* * *
* * *
* * *
*/

#include<stdio.h>
void Pattern(int iNor,int iNoc)
{
    int iCntr=0;
    int iCntc=0;
    for(iCntr=1;iCntr<=iNor;iCntr++)
    {

        for(iCntc=1;iCntc<=iNoc;iCntc++)
        {


            printf("\t*\t");
        }printf("\n");

    }
}
int main()
{
    int iValuer=0,iValuec=0;
    printf("Enter number of rows : ");
    scanf("%d",&iValuer);
    printf("Enter number of coloumn : ");
    scanf("%d",&iValuec);
    Pattern(iValuer,iValuec);
    return 0;

}

