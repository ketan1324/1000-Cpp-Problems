#include<stdio.h>
void Pattern(int iR,int iC)
{
    int i=0,j=0,k=2;
    for(i=1;i<=iR;i++)
    {
        for(j=1;j<=iC;j++)
        {
            if(i%2!=0)
               {
                   printf("%d",j);

            }

            else{
                    printf("%d",k);
                    k++;
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



