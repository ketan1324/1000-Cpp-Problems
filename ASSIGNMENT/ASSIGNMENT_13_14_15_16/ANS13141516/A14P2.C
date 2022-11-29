#include<stdio.h>
void Pattern(int r1,int c1)
{
    int i=0,j=0;
    for(i=1;i<=r1;i++)
    {
        for(j=1;j<=c1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
int main()
{
    int nr=0,nc=0;
    printf("enter rows : ");
    scanf("%d",&nr);
    printf("enter columns : ");
    scanf("%d",&nc);

    Pattern(nr,nc);
    return 0;
}


