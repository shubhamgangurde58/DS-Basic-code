#include<iostream>

using namespace std;

int main()
{
	int stack[10]={10,20,30};
	int n=3;
	int top = n-1;
	
	cout << "Stack before PUSH  operation :"<<endl;
	for(int i=top ; i>=0 ;i--)
	{
		cout << stack[i] << "\n";
	}
	
	
	if(top >= n)
	{
		cout << "stack id full";		
	}
	else{
		top = top+1;
		
		stack[top] = 200;
	}
	
	cout << "Stack after PUSH  operation :\n";
	for(int i=top ; i>=0 ;i--)
	{
		cout << stack[i]<< "\n";
	}	
	
	stack[top--];
	
	cout << "\n\nStack after pop operation :\n";
	for(int i=top ; i>=0 ;i--)
	{
		cout << stack[i]<< "\n";
	}
	
	return 0;
}
