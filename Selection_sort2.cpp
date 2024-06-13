#include<iostream>
using namespace std;
int  main()
{
	int j,i;
	int a[6]={30,20,50,5,8,1};
	
	cout<<"\t";
	for(int  p=0;p<6;p++){
		cout<<a[p]<<" ";
	}
	cout<<endl;
	for(j=0;j<6;j++)
	{
		cout<<"\npass :"<<j+1<<"\t";
		
		for(i=j+1;i<6;i++)
		{
		
			if(a[j]>a[i]){
				int  temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
			cout<<endl;
			cout<<"\t";
			for(int  p=0;p<6;p++){
				cout<<a[p]<<" ";
			}
		}
	}
	cout<<endl;
	
	return 0;
}