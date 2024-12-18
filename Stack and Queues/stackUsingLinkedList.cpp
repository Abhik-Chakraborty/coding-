#include<bits/stdc++.h>
using namespace std;

struct stackNode {
    int data;
    stackNode *next;
    int size;
    stackNode(int d){
        data = d;
        next = NULL;
    }
};
struct Stack {
    stackNode *top;
    int size;
    Stack() {
        top = NULL;
        size = 0;
    }
    void push(int x){
        stackNode *element = new stackNode(x);
        element -> next = top;
        top = element;
        size++;
    }
    int pop(){
        int poppedValue = top -> data;
        stackNode *temp = top;
        top = top -> next;
        delete temp;
        size--;
        return poppedValue;
    }
    int stackSize() {
        return size;
    }
    int isEmpty() {
        return top == NULL;
    }
    int peek() {
        stackNode *current = top;
        while(current != NULL){
            cout << current -> data << " ";
            current = current -> next;
        }
    }

};


int main() {

    Stack s;
    s.push(10);
    cout << "Element popped: " << s.pop() <<endl;
    cout << "Stack size: " << s.stackSize() << endl;
    cout <<"Stack empty or not? "<<s.isEmpty()<<endl;
    cout << "stack's top element: " << s.peek() << endl;

    return 0;
}