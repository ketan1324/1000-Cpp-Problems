

#include<stdio.h>

void Pattern(int iR,int iC)
{
    int i=0,j=0;

    for(i=0;i<iR;i++)
    {
        for(j=0;j<iC;j++)
        {
            printf("%c\t",65+i);
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

