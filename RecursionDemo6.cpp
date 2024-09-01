#include<iostream>
using namespace::std;

class RecursionDemo6{

	public:
		
	 int calcPower(int x , int n){

		if(n == 0){

			return 1;
		}
		if(x == 0){

			return 0;
		}

		if(n % 2 == 0){

			return calcPower(x , n/2) * calcPower(x , n/2);
		}else{

			return calcPower(x , n/2) * calcPower(x , n/2) * x;	
			
		}
		
		}
		
	};
	
	int main(){
		
		int x = 2 ;
		int n = 5;

		RecursionDemo6 obj;
		
		cout<<"Power of x :-"<<obj.calcPower(x , n);
		
		return 0;
}
