#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void headpush(Node*& head, int new_data){

    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = head;

    head = new_node;

}
void insertafter(Node* prev_node, int new_data){
    if(prev_node == NULL) cout<<"The previous node cannot be Null"<<endl;

    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;

}
void append(Node*& head, int new_data){

    Node* new_node = new Node();

    new_node->data = new_data;

    Node* last = head;

    new_node->next = NULL;

    if(head == NULL){
        head = new_node;
        return;
    }

    while(last->next!=NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}
void deleteNode(Node*& head, int key){
    Node* temp = head;
    Node* prev = NULL;

    //if the head holds the key
    if(temp!= NULL && temp->data==key){
        head = temp->next; //changed the node
        delete temp; //frees the space
        return;
    }
    else{
        while(temp!= NULL && temp->data != key){
            prev = temp;
            temp = temp->next;
        }
            if(temp == NULL) return;

            prev->next = temp->next; //unlink the node from linked list

            delete temp;
        
    }

}
void printlist(Node* n){

    while(n!= NULL){
        cout<<n->data<<" ";
        n=n->next;
    }

}
int main(){
    
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;
    
    second->data =2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    headpush(head, 4);
    insertafter(second->next, 7);
    append(head, 9);
    deleteNode(head, 1);
    deleteNode(head, 7);
    printlist(head);
}