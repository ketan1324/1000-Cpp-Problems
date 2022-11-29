
#include<iostream>

template<class T>
T Largest(T *arr,int iSize)
{
T iMax=arr[0];
for(int i=0;i<iSize;i++)
{

    if(arr[i]<iMax)
    {
        iMax=arr[i];
    }
}
return iMax;
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    float brr[]={10.2,5.333,45.3,88.6};
    int iRet=Largest(arr,6);
    printf("%d\n\n",iRet);

    float fret=Largest(brr,4);
    printf("%f",fret);

}
