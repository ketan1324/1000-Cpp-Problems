#include<iostream>

using namespace std;

template<class T>
T Rev(T *arr,int size)
{
    T temp;
    int i=0;
    int j;
    for( i=0,j=size-1;i<size/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t\t",arr[i]);
    }
}
int main()

{
    int size=0;
    printf("size bolo");
    scanf("%d",&size);
    int *arr=new int[size];
    printf("enter ele");
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Rev(arr,size);
}
