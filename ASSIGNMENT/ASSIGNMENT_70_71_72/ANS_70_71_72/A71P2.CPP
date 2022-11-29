#include<iostream>

using namespace std;

template<class T>
T Largest(T a,T b,T c)
{
    if((a>=b)&&(a>=c))
    {
        return a;
    }
    else if((b>=a)&&(b>=c))
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
        int a,b,c;
        printf("Enter the three integers \n");
        scanf("%d %d %d",&a,&b,&c);
        int ret=Largest(a,b,c);
        printf("Largest is %d",ret);

        float a1,b1,c1;
        printf("Enter the three float \n");
        scanf("%f %f %f",&a1,&b1,&c1);
        int iret=Largest(a1,b1,c1);
        printf("Largest is %f",iret);
        return 0;


}

