#include<iostream>
using namespace::std;
class RecursionDemo1{
	
	 public:
	 	
	 	void printNumber(int n){
	 		
	 		if(n == 0){
	 			return ;
			 }
	 		cout<<n<<endl;	
	 		printNumber(n-1);
		 }
};

int main(){
	int n=5;
	
	RecursionDemo1 obj;
	obj.printNumber(n);
	return 0;
}