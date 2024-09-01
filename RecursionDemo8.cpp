#include<iostream>
using namespace::std;
class RecursionDemo8{
	
	public :
		
		void stringRev(int n,int str){
			
			if(n==0){
				return ;
			}
			char currChar = str(n);
			
			cout<<currChar;
			
			stringRev(n-1,str);
		}
		
};

int main(){
	
	String str="abcd";
	
	RecursionDemo8 obj;
	obj.stringRev(str.length(),str);
	return 0;
}