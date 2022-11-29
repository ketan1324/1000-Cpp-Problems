#include<stdio.h>
#include<stdlib.h>
int Display(int iNo)
{
    int iRem=0;
    static int iSum=0;
    if(iNo!=0)
    {
        iRem=iNo%10;
        iSum=iSum+iRem;
        iNo=iNo/10;
        Display(iNo);

    }
    return iSum;

}
int main()
{
    int iNo=0,iRet=0;
    printf("Enter the value");
    scanf("%d",&iNo);
    iRet=Display(iNo);
    printf("%d",iRet);


    return 0;
}
