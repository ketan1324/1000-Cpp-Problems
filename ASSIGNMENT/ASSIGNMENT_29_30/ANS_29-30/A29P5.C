///REVERSE THE STRING
#include<stdio.h>
void Rev(char *str)
{
    int iCnt=0;
    int i=0;
    int count=0;
    int j=0;

   while(str[i]!='\0')
   {
       count++;
       i++;
   }
 ///  printf("length is %d",count);
    for(j=count-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
}
int main()
{
    char arr[100];
    char ch='\0';

    printf("enter the string : ");
    scanf("%[^\n]s",arr);



    Rev(arr);
    return 0;
}
