//
//4. Accept one character from user and convert case of that character.
//
#include<stdio.h>
void DisplayConvert(char);
int main()
{
    char cValue='\o';
    printf("Enter charcter: ");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}
void DisplayConvert(char cChar)
{
    if(cChar>='a'&&cChar<='z')
    {
        printf("%c",cChar-32);
    }
    else if(cChar>='A'&&cChar<='Z')
         {
        printf("%c",cChar+32);
    }

}
