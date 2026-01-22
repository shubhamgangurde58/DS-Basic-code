#include<iostream>
using namespace::std;
class ProblemDemo9{
	
	public:
		
		void calculateGcd(int num1,int num2,int gcd){

			for(int i=1;i<num1;i++){
				
				if(num1%i==0 && num2%i==0){
					
					gcd=i;
				}
			}
			
			cout<<"GCD of number:="<<gcd;
						
		}
		
};
int main(){
	
		//Write a function that calculates the Greatest Common Divisor of 2 numbers.
		
		int num1;
		int num2;
		int gcd=0;
		
		cout<<"Enter the first number:=";
		cin>>num1;
		cout<<"Enter the second number:=";
		cin>>num2;
		
		ProblemDemo9 obj;
		
		obj.calculateGcd(num1,num2,gcd);
	
	return 0;
}
