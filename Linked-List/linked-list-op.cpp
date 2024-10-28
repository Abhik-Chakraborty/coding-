#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};
// traversal of linked list
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;

}
// we want to insert an element before head and make that element head. 
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d); // new node created
    temp -> next = head;
    head = temp;
}
//we want to insert an element after tail and make that element tail.
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d); // new node created
    tail -> next = temp;
    tail = tail -> next;
}
//we want to insert at any position of the linked list. 
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}
//function to delete an element 
void deleteNode(int position, Node* &head){
    //if we have to delete the first element 
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = current;
            current = current -> next;
            count++;
        }
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}


int main() {
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 22);
    print(head);

    insertAtPosition(tail, head, 2, 21);
    print(head);

    insertAtPosition(tail, head, 5, 19);
    print(head);

    deleteNode(3, head);
    print(head);

    return 0;
}