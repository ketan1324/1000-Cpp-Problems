#include<iostream>

using namespace std;

template<class T>
T Print(T value,int no)
{
    for(int i=1;i<=no;i++)
    {
        cout<<value<<" ";
    }
    cout<<"\n";
}
int main()
{
     int no;
     printf("Enter the that int value");
    cin>>no;


    int value;
     printf("ENtert the value");
    cin>>value;
    Print(value,no);

    char value1;
     printf("ENtert the value");
    cin>>value1;
    Print(value1,no);

    float value2;
     printf("ENtert the value");
    cin>>value2;
    Print(value2,no);

    return 0;
}
