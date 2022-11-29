// Write generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>
T Addition(T *arr,int no)
{
	T iSum = 0;
	for(int i = 0;i<no;i++)
	{
		iSum = iSum + arr[i];
	}

	return iSum;
}
int main()
{
	int no = 0,choice = 0;
	cout<<"Enter the number of elements :\t";
	cin>>no;
	cout<<"Which type of array U want "<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"1.Integer"<<endl;
	cout<<"2.Float"<<endl;
	cout<<"3.Double"<<endl;
	cout<<"Enter the choice : \t";
	cin>>choice;

	switch(choice)
	{
		case 1:
			{
				int *arr = new int[no];
				cout<<"Enter the "<<no<<" elements : \n";
				for(int i = 0;i<no;i++)
				{
					cin>>arr[i];
				}
				cout<<"Addition of number is : \t"<<Addition(arr,no);
			}
			break;

		case 2:
			{
				float *arr = new float[no];
				cout<<"Enter the "<<no<<" elements : \n";
				for(int i = 0;i<no;i++)
				{
					cin>>arr[i];
				}
				cout<<"Addition of number is : \t"<<Addition(arr,no);
			}
			break;

		case 3:
			{
				double *arr = new double[no];
				cout<<"Enter the "<<no<<" elements : \n";
				for(int i = 0;i<no;i++)
				{
					cin>>arr[i];
				}
				cout<<"Addition of number is : \t"<<Addition(arr,no);
			}
			break;

		default:
			cout<<"ERROR : INVALID CHOICE!!!";
	}
	return 0;
}
