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
void  DisplayHighMarks(char * name )
{
    struct Students obj;
    int fd,ret;
    int iMax=0;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return ;
    }

    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {

        if(obj.marks>iMax)
        {
           iMax=obj.marks;
        }
    }
    printf("%d",iMax);

    close(fd);

}
int main()
{
    char name[20];
    int iRet=0;
    printf("file name \n");
    scanf("%s",name);
    DisplayHighMarks(name);
    //printf("The highest marks are :%d",iRet);

    return 0;

}
