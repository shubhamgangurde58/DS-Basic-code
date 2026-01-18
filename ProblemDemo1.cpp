#include<iostream>
using namespace::std;
class ProblemDemo1{

	public:
	
	void findAverage(int no1,int no2,int no3){
		
		int average = (no1+no2+no3) / 3 ;
		
		cout<<"\nAverage of 3 no ="<<average;
	}
		
};

int main(){

	cout<<"Enter the 3 number input from user & find the Average \n";
	int no1;
	int no2;
	int no3;	
	cout<<"Please Enter the 3 number :";
	cin>>no1;
	cin>>no2;
	cin>>no3;
	
	ProblemDemo1 obj;
	obj.findAverage(no1,no2,no3);
}
