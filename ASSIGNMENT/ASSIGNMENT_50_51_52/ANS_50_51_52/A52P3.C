
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
void  DisplayLowMarks(char * name )
{
    struct Students obj;
    int fd,ret,iSum=0;
    int iMax=99999;
    float iAvg;
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the file \n");
        return ;
    }

    while((ret=read(fd,&obj,sizeof(obj)))!=0)
    {
        iSum=iSum+obj.marks;
    }

    iAvg=iSum/9;

    printf("The average marks is %f\n",iAvg);


    close(fd);

}
int main()
{
    char name[20];
    int iRet=0;
    printf("file name \n");
    scanf("%s",name);
    DisplayLowMarks(name);
    //printf("The highest marks are :%d",iRet);

    return 0;

}

