#include<bits/stdc++.h>
using namespace std;

class Queue{
    int * arr;
    int start;
    int end;
    int currSize;
    int size;

    public:
    Queue() {
        size = 10;
        arr = new int[size];
        start = -1;
        end = -1;
        currSize = 0;
    }
    void Push(int element){
        if(start == -1 && end == -1){
            start = 0;
            end = 0;
        }else {
            end = (end + 1) % size;
        }
        arr[end] = element;
        cout<<"The element pushed is : "<<element<<endl;
        currSize++;
    }
    int pop(){
        if(start == -1){
            cout<<"queue is empty"<<endl;
        }
        int popped = arr[start];
        if(currSize == 1){
            start = -1;
            end = -1;
        }
        else{
            start = (start + 1) % size;
        }
        currSize--;
        return popped;
        
    }
    int top() {
        if (start == -1) {
        cout << "Queue is Empty" << endl;
        exit(1);
        }
        return arr[start];
    }
    int Size() {
        return currSize;
    }
};


int main() {
  Queue q;
  q.Push(4);
  q.Push(14);
  q.Push(24);
  q.Push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.Size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.Size() << endl;

  return 0;
}