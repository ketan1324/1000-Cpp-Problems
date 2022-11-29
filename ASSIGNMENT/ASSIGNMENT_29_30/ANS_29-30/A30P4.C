#include<stdio.h>
void StrCpyCap(char *src, char *dest)
{
// Fileter
while(*src != '\0')
{
if((*src >= 'a') && (*src <= 'z'))
{
*dest = *src;
 src++;
}
 dest++;
}
*dest='\0';
}
int main()
{
char arr[30] = "Marvellous Multi OS";
char brr[30]; // Empty string
StrCpyCap(arr,brr);
printf("%s",brr);
return 0;
}

