#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<unistd.h>
void DisplayAllFile(char *name)
{
    int fd=0,ret=0;
    char arr[100];
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return ;
    }
    printf("The data from the file is:\n");
    while((ret=read(fd,arr,100))!=0)
    {
        write(1,arr,ret);
    }
    close(fd);
}
int main()
{
    char name[20];
    printf("Enter the name of file :\n");
    scanf("%s",name);
    DisplayAllFile(name);
    return 0;
}
