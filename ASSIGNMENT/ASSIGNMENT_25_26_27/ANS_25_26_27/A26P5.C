/*
5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
*/
#include<stdio.h>

int main()
{
    char ch='\0';printf("enter the alphabate :");
    scanf("%c",&ch);
    printf("%c converted to decimal is  %d\nconverted to hexadecimal is %x converted to octal is %o ",ch,ch,ch,ch);
    return 0;
}

