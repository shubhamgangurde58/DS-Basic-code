#include<iostream>
using namespace std;

void arrayDemo(int arr[5]);

int main()
{
	int arr1[5]={10,20,30,40,50};
	int arr2[5]={1,2,3,4,5};
	arrayDemo(arr1);
	arrayDemo(arr2);	
	return 0;
}
void arrayDemo(int arr[5])
{
	for(int i=0;i<5;i++)
	{
		cout<<i<<":index="<<arr[i]<<endl;
	}
	cout<<"\n\n";
}