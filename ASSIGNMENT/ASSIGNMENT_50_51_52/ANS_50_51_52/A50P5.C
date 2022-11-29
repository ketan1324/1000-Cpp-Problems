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
void DisplayMarks(char *name)
{
    int fd=0,ret=0,iSum=0;
    struct Students obj;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file\n");
        return;
    }
    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {
        iSum=iSum+obj.marks;
    }
    printf("Total marks are %d\n",iSum);


    close(fd);
}

int main()

{
    char name[20];
    printf("Enter the name of the file :\n");
    scanf("%s",name);
    DisplayMarks(name);
    return 0;
}

