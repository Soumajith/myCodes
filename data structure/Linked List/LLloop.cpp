#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head = new node(); 

void push(int data){
    node* new_node = new node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void print(){
    while(head != NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
}

//using set
bool detectLoop(node* ref){
    unordered_set<node*>s;

    while(ref != NULL){
        if(s.find(ref) != s.end()) return true;

        s.insert(ref);
        ref = ref->next;
    }
    return false;
}
//Count node in a loop
int countNode(node* n){
    int ct = 1;
    node* temp = n;
    while(temp->next != n){
        ct++;
        temp = temp->next;
    }

    return ct;
}
int main(){
    head = NULL;

    push(10);
    push(10);
    push(10);
    push(10);

    node* ref = head;
    
    head->next->next->next = head;

    if(detectLoop(ref)) cout<<"Loop"<<endl;
    else cout<<"not found"<<endl;

    ref = head;
    cout<<countNode(ref)<<endl;
    
    
    
}