#include<iostream>
using namespace::std;
class ProblemDemo10{
	
	public:
		
		void printFibonacci(int n,int a,int b){
			
			if(n==0){
				return;
			}
			int c=a+b;
			cout<<c<<endl;
			printFibonacci(n-1,b,c);
			
		}		
};
int main(){
	
		//		Write a program to print Fibonacci series of n terms where n is input
		//		by user :
	
		int n;
		cout<<"Enter the value of n:=";
		cin>>n;
		int a=0;
		int b=1;
		cout<<a<<endl<<b<<endl; 
		
		ProblemDemo10 obj;
		
		obj.printFibonacci(n-2,a,b);

	return 0;
}