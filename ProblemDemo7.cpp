#include<iostream>
using namespace::std;

class ProblemDemo7{
	
	public:
		
		void countNo(int positive ,int negative , int zeros , int number){
		
		char input;
		do{
			
			cout<<"Enter any number=";
			cin>>number;
			
			if(number == 0){
				
				zeros += 1;
				
			}else if(number > 0){
	
				positive += 1;
								
			}else{
				
				negative += 1;
			}
			
			cout<<"continue to input yes='y'/no='n' \n Enter your choice:= ";
			cin>>input;
			
		}while(input == 'y');
		
		cout<<"Positive:="<<positive<<endl;
		cout<<"Negative:="<<negative<<endl;
		cout<<"Zeros:="<<zeros<<endl;
	}
		
		
};

int main(){
	
	//	Write a program to enter the numbers till the user wants and at the end it
	//	should display the count of positive, negative and zeros entered.
	
	int positive =0;
	int negative =0;
	int zeros = 0;
	int number =0;
	
	ProblemDemo7 obj;
	
	obj.countNo(positive,negative,zeros,number);
	
}
