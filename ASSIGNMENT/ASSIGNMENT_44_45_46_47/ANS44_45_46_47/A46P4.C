#include<stdio.h>
#include<stdlib.h>

int Display(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    else
    {
        // recursive call
        return iNo * Display(iNo -  1);
    }


}
int main()
{
    int iNo=0;
    printf("enter the iNober ");
    scanf("%d",&iNo);
    int iRet=0;
    iRet=Display(iNo);
    printf("%d",iRet);
    return 0;

}
