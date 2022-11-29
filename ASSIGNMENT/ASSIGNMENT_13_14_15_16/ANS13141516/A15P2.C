/*
2. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :
A B C D
a b c d
A B C D
a b c d
*/
#include<stdio.h>
void Pattern(int iR,int iC)
{
   int i=0,j=0,k=0;

    for(i=0;i<iR;i++)
    {
        for(j=0;j<iC;j++)
        {
            if(i%2==0)
            {
                printf("%c",65+j);
            }
            else
            {
               printf("%c",97+j);
            }
        }printf("\n");

        }




    }

int main()
{
    int iValue1=0,iValue2=0;
    printf("enter number of rows: ");
    scanf("%d",&iValue1);
    printf("enter number of coloumns : ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}
