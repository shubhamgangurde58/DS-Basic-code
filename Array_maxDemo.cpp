#include<iostream>
using namespace std;
int main()
{
	int size;
	int max;
	cout<<"Enter the size of Array:"<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter the element:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	cout<<"max="<<max<<endl;
	

	
	return 0;
}