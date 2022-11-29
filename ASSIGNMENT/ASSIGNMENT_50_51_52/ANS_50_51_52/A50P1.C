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
void FileWrite(char *name)
{
    struct Students obj;
    int fd=0,iNo=0,i=0,ret=0;
    fd=open(name,O_WRONLY);
    if(fd==-1)
    {
        printf("Unable to open the file :\n");
        return ;
    }
    printf("Enter the number of students:\n");
    scanf("%d",&iNo);

    for(i=1;i<=iNo;i++)
    {
        printf("Enter the roll number :\n");
        scanf("%d",&obj.roll);
        printf("Enter the name of the students :\n ");
        scanf("%s",&obj.name);
        printf("Enter the marks of the students :\n ");
        scanf("%d",&obj.marks);

        write(fd,&obj,sizeof(obj));
    }
    close(fd);
}

int main()

{
    char name[20];
    printf("Enter the name of the file :\n");
    scanf("%s",name);
    FileWrite(name);
    return 0;
}
