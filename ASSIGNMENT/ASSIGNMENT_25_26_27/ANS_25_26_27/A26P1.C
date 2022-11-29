/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/



#include<stdio.h>
void DisplayASCII()
{
int Deci=0;
char Hexa='\0';
char CHAR='\0';
int iCnt=0;
for (iCnt=0;iCnt<='127';iCnt++)
{
    if(Deci==0&&Hexa=='\0'&&CHAR=='\0')
    {
    printf("decima  %d\thexa  %x\tchar  %c\t ",Deci,Deci,Deci);
    printf("\n");
    }

}

}
int main()
{
DisplayASCII();
return 0;
}
