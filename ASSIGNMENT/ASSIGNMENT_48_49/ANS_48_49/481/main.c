#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
#include<unistd.h>
void OpenFile(char *name)
{
    int fd=0;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return ;
    }
    else
    {
        printf("File successfully opned\n");
    }
    close(fd);

}
int main()
{
    char name[20];
    printf("Enter the name of file :\n");
    scanf("%s",name);
    OpenFile(name);
    return 0;
}
