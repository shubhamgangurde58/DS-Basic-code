#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        cout << "Stack Overflow\n";
    else {
        stack[++top] = x;
    }
}

void display() {
    if (top == -1)
        cout << "Stack is empty\n";
    else {
        cout << "Stack elements:\n";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << endl;
    }
}

int main() {
    push(5);
    push(15);
    push(25);
    display();
    return 0;
}
