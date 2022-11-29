#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int CountSmall(char* name)
{
    int fd=0,ret=0,iCnt=0,i=0;
    fd=open(name,O_RDONLY);
    char mug[100];
    if(fd==-1)
    {
        printf("unable to open the file\n");
        return -1;
    }
    while((ret=read(fd,mug,sizeof(mug)))!=0)
    {
     for(i=0;i<ret;i++)
     {
         if((mug[i]>=' '))
         {
             iCnt++;
         }

     }
    }
    return iCnt;
    close(fd);

}
int main()

{
    char name[20];
    printf("enter the name of the file\n");
    scanf("%s",name);
    int ret=0;
    ret=CountSmall(name);
    printf("the white spaces are %d",ret);
    return 0;
}
