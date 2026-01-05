#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into stack\n";
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
    } else {
        Node* temp = top;
        cout << top->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    return 0;
}
