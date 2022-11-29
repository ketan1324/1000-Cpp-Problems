#include<iostream>

using namespace std;

template<class T>
T firstOcc(T *arr,int size,T no )
{
    int i=0;
    for( i =0;i<size;i++)
    {
        if(arr[i]==no)
        {
            break;
        }
    }
    printf("%d",i+1);
}
int main()
{
    int size=0;
    printf("ENter size");
    scanf("%d",&size);
    int *arr=new int[size];
    printf("enter array elements");
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int no;
    printf("ENter tno.find occ");
    scanf("%d",&no);
    firstOcc(arr,size,no);

    ///
    int size1=0;
    printf("ENter size");
    scanf("%d",&size1);
    char *arr1=new char[size1];
    printf("enter array elements");
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    char no1;
    printf("ENter tno.find occ");
    scanf("%d",&no1);
    firstOcc(arr1,size1,no1);

    ///
    int size2=0;
    printf("ENter size");
    scanf("%d",&size2);
    float *arr2=new float[size2];
    printf("enter array elements");
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    int no2;
    printf("ENter tno.find occ");
    scanf("%d",&no2);
    firstOcc(arr2,size2,no2);


}
