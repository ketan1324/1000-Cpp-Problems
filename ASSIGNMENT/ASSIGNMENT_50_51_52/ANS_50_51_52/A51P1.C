#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
struct Students
{
    int roll;
    char name[20];
    int marks;
};
void DisplayInfo(char *file,char *name)
{
    struct Students obj;
    int fd=0;
    int ret;
    fd=open(file,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file\n");
        return;
    }
    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {
       if(strcmp(name,obj.name)==0)
       {
           printf("roll no. is  are :%d\n",obj.roll);
           printf("marks are :%d\n",obj.marks);
       }

    }
    close(fd);
}
int main()
{
    char file[20];
    char name[20];
    printf("Enter the name of the file:\n");
    scanf("%s",file);

    printf("Enter the name of the students:\n");
    scanf("%s",name);
    DisplayInfo(file,name);
    return 0;
}
