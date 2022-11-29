
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
struct Students
{
    int roll;
    char name[20];
    int marks;
};
void DisplayNameP(char *name)
{
    struct Students obj;
    int fd,ret;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return;

    }
    while(ret=read(fd,&obj,sizeof(obj))!=0)
    {
        if(obj.marks==95)
        {
            printf("the name of the student is %s \n",obj.name);

        }

    }
    close(fd);
}
int main()
{
    char name[20];
    printf("Enter the name of the file \n");
    scanf("%s",name);

    DisplayNameP(name);
    return 0;
}

