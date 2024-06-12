#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,20,30,40,50,60};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element = 50;
	int mid;
	int B=0;
	int E=size;
	
	while(B<=E)
	{
		mid = (B+E)/2;
		
		if(arr[mid]==element)
		{
			cout<<"Element is found at index="<<mid;
			exit(0);
		}
		else if(element>arr[mid])
		{
			B=mid+1;
		}
		else if(element<arr[mid])
		{
			E=mid-1;
		}
	}
	cout<<"\nElement not found";
	
	
	return 0;
}