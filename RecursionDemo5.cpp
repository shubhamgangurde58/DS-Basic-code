#include<iostream>
using namespace::std;
class RecursionDemo5{
	
	public:
		
		int calcPower(int x,int n){
			
			
			if(n==0){
		
				return 1;				
			}
			
			if(x == 0){
				
				return 0;
			}
	
			
			int powerof  =	calcPower(x,n-1);
		
			int pow = powerof * x; 
			
			return pow;
		 
		}	
};

int main(){
	
	int x=0;
	cout<<"Enter the value of X:-";
	cin>>x;
	int n=0;
	cout<<"Enter the value of n:-";
	cin>>n;
	
	RecursionDemo5 obj;
	
	cout<<"power of x'n :-"<<obj.calcPower(x,n);
	return 0;
}