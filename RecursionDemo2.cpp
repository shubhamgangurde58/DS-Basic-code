#include<iostream>
using namespace::std;
class RecursionDemo2{
	
	public:
		
		void printSum(int n,int sum){
			
			if(n==0){
				cout<<"sum="<<sum;
				return;
			}
			cout<<n<<endl;
			sum += n;
			printSum(n-1,sum);
		
		}
	
};

int main(){
	
	int n=5;
	int sum=0;
	
	RecursionDemo2 obj;

	obj.printSum(n,sum);
	return 0;
}