#include<iostream>
using namespace::std;

class ProblemDemo2{
	
	public:
		
	int sumCalc(int n,int sum){

		for(int i=0;i<n;i++){
			
			if(i%2 != 0){
			
				 sum += i;
			}
		}
			return sum;		
	}
	
};

int main(){
	
	cout<<"Write a function to print the sum of all Odd number from 1 to N:\n";
	int n;
	int sum;
	cout<<"Enter the value of n:\n";
	cin>>n;
	
	ProblemDemo2 obj;
	
	cout<<obj.sumCalc(n,sum);	
	
}