#include<iostream>
using namespace::std;

class ProblemDemo8{
	
	public:
		
		
		void findPower(int x,int n,int pow){
			
			if(n == 0)
			{
				cout<<"Power of x raised of n :="<<pow<<endl;
				return;
			}
			pow = pow * x;
			
			findPower(x,n-1,pow);
			
		}
	
};

int main(){
	
	//	Two numbers are entered by the user, x and n. Write a function to find
	//	the value of one number raised to the power of another i.e. ??
	
	int x;
	int n;
	cout<<"Enter the value of x:="<<endl;
	cin>>x;
	cout<<"Enter the value of n:="<<endl;
	cin>>n;
	
	int  pow =1;
	
	ProblemDemo8 obj;
	obj.findPower(x,n,pow);
}