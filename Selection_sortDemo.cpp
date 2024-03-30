#include<iostream>
using namespace std;
int main(){
	int i,j;
	int arr[5] = {80,70,50,30,90};
	cout<<"\nBefore sorting"<<endl;
	for(int d=0;d<5;d++){
		
		cout<<arr[d]<<" ";
	}
	//int element = sizeof(arr)/sizeof(arr[0]);
	cout<<"\nAfter Sort:\n";
	int element = 5;
	for( i=0;i<element;i++){
	int small;
	small=i;
	cout<<"pass :"<<i+1<<endl;
	for( j=i+1;j<element;j++){
	
			if(arr[small]>arr[j]){
				int temp=0;
				temp = arr[small];
				arr[small] = arr[j];
				arr[j] = temp;
			}
			
			cout<<"\n\tstep"<<j+1<<": ";
			
			for(int k=0;k<element;k++){
				cout<<arr[k]<<",";
			}
			
		}
		cout<<endl;
	}
	return 0;
}