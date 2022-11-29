///TAKE STRING INPUT AND ALSO A INTERGER INPUT AND PRINT THAT MUCH CHARCTER ONLY IN ANOTHER STRING.

#include<stdio.h>
void SrtCpyXX(char *arr,char *brr,int iCnt)
{
    int i=0;
    while(arr[i]!='\0'&&iCnt!=0)
    {
        *brr=*arr;
        arr++;
        brr++;
        iCnt--;
    }
   // printf("%s",brr);
   *brr='\0';
}

int main()
{
    char arr[30]="hello ketan !";
    char brr[30];
    int iCnt=0;
    printf("number ");
    scanf("%d",&iCnt);

    SrtCpyXX(arr,brr,iCnt);
    printf(" int the main %s",brr);
    return 0;
}
///not
