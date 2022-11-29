/*
4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
*/

#include<stdio.h>
void Special(int ch)
{
    if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*')
    {
        printf("<-------------------------------------------------------->\n");
        printf("            YES ITS SPECIAL CHARCTER                \n");
        printf("<-------------------------------------------------------->\n");
    }
    else
    {
        return;
    }
}
int main()
{
    char ch='\0';
    printf("enter the value to check weather its special character or not :");
    scanf("%c",&ch);
    Special(ch);
    return 0;
}
