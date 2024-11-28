#include<iostream>
using namespace std;
int main()
{
	int max=0;
	int size;
	
	cout<<"Enter the size of Array= "<<endl;
	cin>>size;
	int a[size];
	
	
	cout<<"Enter the Array element:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int min=a[0];
	cout<<"Element of Array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\n index="<<a[i];
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"\nminimum="<<min<<endl;
	return 0;
}