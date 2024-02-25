#include<iostream>
using namespace std;
int main()
{
	
	int n;
	int i;
	cout<<"Enter the Array size:"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the Array Element:";
	for( i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<i<<" "<<"index="<<a[i]<<endl;
	}
	return 0;
}