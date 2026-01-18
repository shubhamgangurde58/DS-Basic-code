#include<iostream>
using namespace::std;

class ProblemDemo5{

	public:

	char checkEligibility(int age){
		
		if(age >= 18){
			
			return true;
			
		}else{
			
			return false;
		}
		
	}
		
};

int main(){
	
		//Write a function that takes in age as input and returns if that person is eligible
		//to vote or not. A person of age > 18 is eligible to vote.
		
		int age;
		cout<<"Enter your Age =";
		cin>>age;
		
		 ProblemDemo5 obj;
		 
		if(obj.checkEligibility(age) == true){
			
			cout<<"Person is eligible for voting";
			
		}else{
			
			cout<<"Person is not eligible for voting";
			
		}
}
