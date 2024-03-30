#include<iostream>
using namespace std;

class stack{
	
	int stk[5];
	int top;
	
	public :
		stack(){
			top = -1;
		}
		void push(int x){
			
			if(top>4){
				cout<<"stack is over flow";
				return ;
			}else{
				stk[++top]=x;
				cout<<"INSERTION ELEMENT IS:"<<x;
				cout<<"\n";
			}
		}
		void pop(){
			if(top<0){
				cout<<"stack is under flow";
				return;
			}
			else{
				cout<<"DELETED ELEMENT IS :"<<stk[top--];
				cout<<"\n";
			}
		}
		void display(){
			if(top<0){
				cout<<"stack Empty";
				return ;
			}
			else
			{
				for(int i=top;i>=0;i--){
					cout<<stk[i]<<" ";
				}
			}
		}
};

int main(){
	int ch;
	stack st;
	
	while(1)
	{
		cout<<"\n 1.push \n 2.pop \n 3.display\n 4.Exit\n Enter your choice:";
		cin>>ch;
		switch(ch){
			
			case 1:cout<<"enter the Element is :";
			cin>>ch;
			st.push(ch);
			break;
			
			case 2: st.pop();
			break;
			
			case 3: st.display();
			break;
			
			case 4: exit(0);		
		}
	}
	return 0;
}