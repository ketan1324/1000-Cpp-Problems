#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int CountCapital(char *name)
{
    int fd=0,iCnt=0,ret=0,i=0;
    char mug[100];
    fd=open(name,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open the the file\n");
        return -1;
    }
   printf("the fd size is %d\n\n",fd);
    while((ret=read(fd,mug,sizeof(mug)))!=0)
    {
       for(i=0;i<ret;i++)
       {
           if((mug[i]>='A')&&(mug[i]<='Z'))
           {
               iCnt++;
           }
       }
    }
    return iCnt;
}
int main()
{
    char name[20];
    printf("Enter the name :\n");
    scanf("%s",&name);
    int iRet=0;
    iRet=CountCapital(name);
    printf("The capital character are %d",iRet);
    return 0;
}
