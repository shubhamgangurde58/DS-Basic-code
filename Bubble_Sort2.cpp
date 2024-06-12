#include<iostream>
using namespace std;

int main(){
	cout<<"Bubble sort problem\n";
	int a[9] = {90,80,70,100,50,40,30,120,10};
	int i;
	cout<<"\t";
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<9;i++){
		cout<<"\tstep."<<i+1<<" ";
		for(int i=0;i<9-1;i++){
			
			if(a[i]>a[i+1]){
				
				int temp;
				temp = a[i] ;
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}