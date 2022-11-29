#include<iostream>
#include<stdio.h>

class Array
{
protected:
    int *Arr;
    int size;
public:

    Array(int value=10)
    {
        this->size=value;
        this->Arr=new int[size];
    }
    Array(Array &ref)
    {
        this->size=ref.size;
        this->Arr=new int [this->size];

        for(int i=0;i<size;i++)
        {
            this->Arr[i]=ref.Arr[i];
        }
    }
    ~Array()
    {
        delete []Arr;
    }
    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
   printf("plese enter the values\n");

    for(int i=0;i<this->size;i++)
    {
       scanf("%d",Arr[i]);
    }
}
void Array::Display()
{
   printf("Entered elements are:\n");

    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}
class ArrSearch:public Array
{
public:
    ArrSearch(int no=10):Arr(no)
    {}
    int Frequecy(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};
int ArrSearch::SearchFirst(int value)
{
    int i=0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==size)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}
int ArrSearch::Frequency(int value)
{
    int iCnt=0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            iCnt++;
        }
        return iCnt;
    }
}
int ArrSearch::SearchLast(int value)
{
    int iLast=-1;

    for(int i=0;i<this->size;i++)
    {
        if(Arr[i]==value)
        {
            iLast=i;
        }
    }
    return iLast+1;
}
int ArrSearch::EvenCount()
{
    int iEven=0;
    for(int i=0;i<this->size;i++)
    {
        if(Arr[i]%2==0)
        {
            iEven++;
        }
    }
    return iEven;
}
int ArrSearch::OddCount()
{
	int iOdd = 0;

	for(int i = 0;i<this->size;i++)
	{
		if(Arr[i]%2!=0)
		{
			iOdd++;
		}
	}

	return iOdd;
}
int ArrSearch::SumAll()
{
	int iSum = 0;

	for(int i = 0;i<this->size;i++)
	{
		iSum = iSum + Arr[i];
	}

	return iSum;
}
int main()
{
	int length = 0;
	cout<<"Enter the number of elements : \t";
	cin>>length;
	ArrSearch sobj1(length);
	sobj1.Accept();
	sobj1.Display();

	cout<<"---------------------------------------------------------------"<<endl;
	int no = 0;
	cout<<"Enter the number you want Frequency of : \t";
	cin>>no;
	int iret = sobj1.Frequency(no);

	if(iret == 0)
	{
		cout<<"Elements is not in array"<<endl;
	}
	else
	{
		cout<<"Frequency of "<<no<<" is : \t"<<iret<<endl;
	}

	cout<<"---------------------------------------------------------------"<<endl;

	cout<<"Enter the number you want First occurance of : \t";
	cin>>no;

	iret = sobj1.SearchFirst(no);

	if(iret == -1)
	{
		cout<<"Elements is not in array"<<endl;
	}
	else
	{
		cout<<"First occurance of "<<no<<" is : \t"<<iret<<endl;
	}

	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"Enter the number you want Last occurance of : \t";
	cin>>no;

	iret = sobj1.SearchLast(no);

	if(iret == 0)
	{
		cout<<"Elements is not in array"<<endl;
	}
	else
	{
		cout<<"Last occurance of "<<no<<" is : \t"<<iret<<endl;
	}

	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"number of even numbers present in array is : \t"<<sobj1.EvenCount()<<endl;

	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"number of odd numbers present in array is : \t"<<sobj1.OddCount()<<endl;

	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"sum of all numbers present in array is : \t"<<sobj1.SumAll()<<endl;

	cout<<"---------------------------------------------------------------"<<endl;

	return 0;
}











