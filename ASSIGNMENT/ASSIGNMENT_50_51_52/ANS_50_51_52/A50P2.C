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
void FileRead(char *name)
{
    struct Students obj;
    int fd=0,ret=0;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file :\n");
        return ;
    }
    printf("Data from the file is :\n");
    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {
        printf("Roll number of the students is :%d\n",obj.roll);
        printf("Name of the students is :%s\n",obj.name);
        printf("Marks of the students is :%d\n",obj.marks);
    }
    close(fd);
}
int main()

{
    char name[20];
    printf("Enter the name of the file :\n");
    scanf("%s",name);
    FileRead(name);
    return 0;
}
