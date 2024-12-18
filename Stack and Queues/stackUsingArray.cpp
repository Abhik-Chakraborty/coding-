#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size;
    int * arr;
    int top;
    public: 
    Stack() {
        top = -1;
        size = 10;
        arr = new int [size];
    }
    void push(int element){
        top++;
        arr[top] = element;
    }
    int pop(){
        int element = arr[top];
        top--;
        return element;
    }
    int Top(){
        return arr[top];
    }
    int Size() {
        return top + 1;
    }
};


int main() {

    Stack st;
    st.push(6);
    st.push(7);
    st.push(3);
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.Top()<<endl;
    st.push(10);
    cout<<st.Top()<<endl;

    return 0;
}