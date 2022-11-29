
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           if(i==1){printf("*\t");}
           else if(i==iRow){printf("*\t");}
           else if(j==1){printf("*\t");}
           else if(j==iCol){printf("*\t");}

           else
           {
               printf("$\t");
           }


        }
        printf("\n \n");
    }
}
int main()
{
        int iValue1=0;
        int iValue2=0;
        printf("enter number of rows : ");
        scanf("%d",&iValue1);

        printf("enter number of coloumn : ");
        scanf("%d",&iValue2);

        Pattern(iValue1,iValue2);
        return 0;

}

