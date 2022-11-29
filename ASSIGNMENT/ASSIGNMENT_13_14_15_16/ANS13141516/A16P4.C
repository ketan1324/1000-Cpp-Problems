#include<stdio.h>
void Pattern(int iR,int iC)
{
    int i=0,j=0,k=0;
    for(i=1;i<=iR;i++)
    {
        for(j=1;j<=iC;j++)
        {
            if(%2==0)
               {printf("%d",j*2);}
            else{printf("%d",j*2);}
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


