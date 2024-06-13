#include<iostream>
using namespace std;

class QueueDemo{
	int que[5];
	int front;
	int rear;
	
	public:
	QueueDemo(){
		front = -1;
		rear = -1;
	}	
	void push(int x){
		if(rear>4)
		{
			cout<<"Queue is overe flow"<<endl;
			return;
		}else{
			que[++rear]=x;
			cout<<"Inserting element is="<<x<<endl;
		}
	}
	void pop(){
		if(front==rear){
			cout<<"Queue is over flow"<<endl;
			return;
		}else{
			cout<<"Deleted queue="<<que[++front]<<endl;
		}
	}
	void display(){
		if(rear==front){
			
			cout<<"queue is Empty";
			return;
		}else{
			for(int i=front+1;i<=rear;i++){
				
				cout<<que[i]<<" ";
			}
		}
	}
};
int main(){
	int ch;
	QueueDemo obj;

	while(1)
	{
		cout<<"\n1.push\n2.pop\n3.display\n4.Exit\n Enter your Opretion No:";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter the element =";
			cin>>ch;
			obj.push(ch);
			break;
			case 2:obj.pop();
			break;
			case 3:obj.display();
			break;
			case 4:exit(0);
			break;
			
		}
	}
	return 0;
}