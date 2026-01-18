#include<iostream>
using namespace::std;

class ProblemDemo3{
	
	public:
		
	int findGreater(int no1,int no2){
	
			if(no1 > no2){
				return no1;
			}else{
				return no2;
			}			
		}
		
};

int main(){
	
	cout<<"Enter the Two No from user & find greater No:"<<endl;
	int no1;
	int no2;
	
	cout<<"Please enter the value of no1:"<<endl;
	cin>>no1;

	cout<<"Please enter the value of no2:"<<endl;
	cin>>no2;
	
	ProblemDemo3 obj;
	cout<<obj.findGreater(no1,no2)<<" is greater No";	
}