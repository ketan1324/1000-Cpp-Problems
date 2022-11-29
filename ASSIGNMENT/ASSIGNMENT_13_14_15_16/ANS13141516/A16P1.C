#include<stdio.h>
void Pattern(int iR,int iC)
{
    int i=0,j=0,k=1;
    for(i=1;i<=iR;i++)
    {
        for(j=1;j<=iC;j++)
        {
            printf("%d\t",k);
            k++;
            if(k==10)
            {
                k=1;
            }

        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter Number of rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number of coloumns : ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}
