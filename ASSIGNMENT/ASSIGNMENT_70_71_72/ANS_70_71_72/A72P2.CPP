
#include<iostream>

using namespace std;

template<class T>
T Print(T *Arr,int iSize,T iNo)
{
    int iCnt=0;
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    int size=0;
    printf("ENter the size\n");
    scanf("%d",&size);
    int *Arr=new int[size];
    printf("enter the array\n");
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
    int no=0;
    printf("ENter the number you want to find the frequency\n");
    scanf("%d",&no);
    int ret1=Print(Arr,size,no);
    cout<<"\n"<<ret1;
    ////////////////////////////////////////////////////
    int  size1=0;
    printf("\nENter the size");
    scanf("%d",&size1);
    char *Arr1=new char [size1];
    printf("\nenter the array");
    for(int i=0;i<size1;i++)
    {
        cin>>Arr1[i];
    }
    char no1;
    printf("\nENter the number you want to find the frequency");
    scanf(" %c",&no1);
    int ret2=Print(Arr1,size1,no1);
    cout<<"\n"<<ret2;
    ///////////////////////////////////////////////////////
    int  size2=0;
    printf("\nENter the size");
    scanf("%d",&size2);
    float *Arr2=new float [size2];
    printf("\nenter the array");
    for(int i=0;i<size2;i++)
    {
        cin>>Arr2[i];
    }
    float no2=0;
    printf("\nENter the number you want to find the frequency");
    scanf("%f",&no2);
    int ret3=Print(Arr2,size2,no2);
    cout<<"\n"<<ret3;

}
