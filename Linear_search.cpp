#include<iostream>
using namespace std;
int main(){
	int a[] = {10,20,30,40,50,60};
	int element = sizeof(a)/sizeof(a[0]);
	int i;
	int find = 50;
	
	for(i=0;i<element;i++){
		if(a[i] == find){
			cout<<"index="<<i<<endl;
		}
	}
	
	return 0;
}