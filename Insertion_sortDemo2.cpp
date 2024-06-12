#include<iostream>
using namespace std;
int main()
{
	int a[]{50,40,30,20};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	int temp,j,i;
	
	for(int p=0; p<n; p++)
	{
		cout<<" "<<a[p];
	}
	cout<<endl;
	
	for(i=1; i<n; i++)
	{
		temp = a[i];
		j=i-1;
		while(j>=0 && temp<=a[j]){
			a[j+1] = a[j];
			j= j-1;
		}
		a[j+1]=temp;
		
		for(int p=0; p<n; p++)
		{
			cout<<" "<<a[p];
		}
		cout<<endl;
	}
 
	return 0;
}