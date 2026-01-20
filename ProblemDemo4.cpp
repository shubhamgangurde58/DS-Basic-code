#include<iostream>
using namespace::std;

class ProblemDemo4{
	
	public:	
		double countCircle(double radius){
			
			return 2 * 3.14 * radius;
		}
	
};

int main(){
	
	//	Write a function that takes in the radius as input and returns the
	//	circumference of a circle.
	
	int radius;
	cout<<"Enter the Radius of circle=";
	cin>>radius;
	
	ProblemDemo4 obj;
	
	cout<<"Circumference of circle ="<<obj.countCircle(radius);
}