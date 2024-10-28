#include<bits/stdc++.h>
using namespace std;

// class node : Represents individual nodes in a linked list.
class Node {
    public:
    int data; // data variable that stores data for the node 
    Node* next; // a pointer to anther node.  This pointer will link this node to the next node in the linked list or be NULL if this is the last node in the list.

    // constructor of Node class. It initializes the node with a specific data value.
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};




int main() {
    Node* node1 = new Node(10); //dynamically allocates memory for a new Node object
    cout<<node1 -> data<<endl; // 10 : data of the node 
    cout<<node1 -> next<<endl; // 0 : memory address of the next pointer node



    return 0;
}