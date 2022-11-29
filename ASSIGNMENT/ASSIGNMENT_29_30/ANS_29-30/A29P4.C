///return the index of last occurance

#include<stdio.h>
#include<string.h>
int LastFreq(char *str,char ch)
{
    int iCnt=0,i=0,count=0;
   /* for(str[i]=sizeof(str[i]);str[i]>=0;str[i]--)
    {
        if(str[i]==ch)
        {
            return i ;
        }
    } */
    int len=0,index=0;


   while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            index=i;
            printf("indes is %d\n",index);
        }
        i++;
       /// printf("i = %d",i);
    }

    return index;
   /// printf("indes is %d\n",index);
}
int main()
{
    char arr[100];
    char ch='\0';
    int iRet=0;

    printf("Enter the string :");
    scanf("%[^'\n']s",arr);

    printf("enter the value of character :");
    scanf(" %c",&ch);

    iRet=LastFreq(arr,ch);
    printf("the last occurance of %c is %d",ch,iRet);

    return 0;


}
