#include<iostream>
using namespace::std;
int main(){
	
	// floyd,s Triangle
	
	int h=1;
	int n=4;
	
	for(int i=0;i<=n;i++){
		
		for(int j=0;j<=i;j++){
			
			cout<<h<<" ";
			h++;
		}
		cout<<"\n";
		
	}
	return 0;
}