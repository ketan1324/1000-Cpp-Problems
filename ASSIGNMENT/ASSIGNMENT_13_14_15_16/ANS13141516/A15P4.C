
#include<stdio.h>

void Pattern(int iR,int iC)
{
    int i=0,j=0;

    for(i=iR;i>=1;i--)
    {
        for(j=iC;j>=1;j--)
        {
            printf("%d\t",i);
        }printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter number of rows : ");
    scanf("%d",&iValue1);
    printf("enter number of coloumns  :");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}

