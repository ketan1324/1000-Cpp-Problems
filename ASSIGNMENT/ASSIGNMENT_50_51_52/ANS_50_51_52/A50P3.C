#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
struct Students
{
    int roll;
    char name[20];
    int marks;
};
void DisplayName(char *name)
{
    struct Students obj;
    int fd=0,ret=0;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return ;
    }
    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {
        printf("The Name of the student is :%s\n",obj.name);

    }
    close(fd);

}

int main()

{
    char name[20];
    printf("Enter the name of the file :\n");
    scanf("%s",name);
    DisplayName(name);
    return 0;
}
