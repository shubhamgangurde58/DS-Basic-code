#include<iostream>
using namespace::std;
int main(){
	
	// Inverted half pyramid rotated by 180 degree;
	
	int n=4;
	for(int i=0;i<=n;i++){
		
		for(int j=0;j<=n-i;j++){
			
			cout<<"  ";
		}
		
		for(int j=0;j<=i;j++){
			
			cout<<"* ";
		}
		
		cout<<"\n";
		
	} 
	return 0;
}