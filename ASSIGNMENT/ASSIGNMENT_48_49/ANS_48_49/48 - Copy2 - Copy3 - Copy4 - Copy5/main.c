#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<unistd.h>
int DisplaySize(char *name)
{
    int fd=0,ret=0;
    char arr[100];
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return -1 ;
    }
    ret=lseek(fd,0,SEEK_END);
    return ret;

    close(fd);
}
int main()
{
    char name[20];
    int iRet=0;
    printf("Enter the name of file :\n");
    scanf("%s",name);
    iRet=DisplaySize(name);
    printf("The Size of the file is %d",iRet);
    return 0;
}
