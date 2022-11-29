#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<unistd.h>
void CreateFile(char *name)
{
    int fd=0;
    fd=creat(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return ;
    }
    else
    {
        printf("File successfully created\n");
    }
    close(fd);

}
int main()
{
    char name[20];
    printf("Enter the name of file :\n");
    scanf("%s",name);
    CreateFile(name);
    return 0;
}
