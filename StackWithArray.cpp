#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << stack[top] << " popped from stack\n";
        top--;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    return 0;
}
