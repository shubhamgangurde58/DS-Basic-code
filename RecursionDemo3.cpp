#include<iostream>
using namespace std;
class RecursionDemo3{
	
	public:
		
		void findFactorial(int n,int fact){
			
			if(n==0){
				
				cout<<"Factorial of n:="<<fact;
				return ;
			}
			fact = fact * n;
			
			findFactorial(n-1,fact);
		}
};

int main(){
	
	int n=6;
	int fact=1;
	
	RecursionDemo3 obj;
	
	obj.findFactorial(n,fact);
	
	return 0;
}