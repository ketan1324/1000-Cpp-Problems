
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
struct Students
{
    int roll;
    char name[20];
    int marks;
};
void DisplayNameLength(char *name )
{
    struct Students obj;
    int fd,ret=0,length=0;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file\n");
        return;
    }
    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {
        length=strlen(obj.name);
        if(length==6)
        {
            printf("The name is %s\n",obj.name);
        }
    }
    close(fd);

}
int main()
{
    char name[20];
    printf("Enter the name of the file \n");
    scanf("%s",name);

    DisplayNameLength(name);
    return 0;
}

