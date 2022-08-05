#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

//declaration of the node
node* head = new node();
node* current = new node();

int length(){ //iteratibe
    node* traverse = head;
    int ct{};
    cout<<"Length: ";
    while(traverse!= NULL){
        ct++;
        traverse = traverse->next;
    }
    return ct;
}

int Count(node* ref){
    if(ref == NULL) return 0;
    else{
        return 1 + Count(ref->next);
    }
}

void printlist(){
    node* temp = head;
    cout<<"The elements are: "<<endl;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertFirst(int data){
    node* new_node = new node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void insertbt(node* prev_node,int data){
    if(prev_node == NULL) cout<<"Can't add to it"<<endl;
    node* new_node = new node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next= new_node;
}

void insertend(int data){
    node* last_node = head;
    node* new_node = new node();
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL){
        head = new_node;
    }
    else{
        while(last_node->next != NULL){
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }
}

void search(int key){ //iterative
    current = head;
    if(head == NULL){
        cout<<"The list is empty"<<endl;
    }
    while(current->data != key){
        if(current->next == NULL){
            break;
        }
        else{
        current = current->next;
        }
    } 
}

bool searchR(node* ref, int key){ //recursive
    
    //base case
    if(ref == NULL) return 0;
    
    //found, return true
    if(ref->data == key) return 1;

    return searchR(ref->next, key);

}

void reverse(){
    current = head;
    node* prev = NULL;
    node* next = NULL;
    while(current != NULL){
        next = current->next; //store next
        current->next = prev; //reverse current node's pointer
        //move pointer one position ahead
        prev = current; 
        current = next;
    }
    head = prev;
}
//recursive method
int nthNode(node* ref, int n){
    if(ref == NULL) return 0;

    if(n == 0) return ref->data;

    return nthNode(ref->next, n-1);
    
}
//to find the nth node from end
void nthNodeEnd(int n){ //iterative 
    int len{};
    node* temp = head;
    while(temp!= NULL){
        len++;
        temp = temp->next;
    }

    if(len<n) return;

    temp = head;
    for (int i = 1; i < len-n+1; i++)
    {
        temp= temp->next;
    }
    cout<<temp->data<<endl;
}
//recursive //incompelete 
void NthNodeEnd(node* ref, int n, int i=0){
    
    
    if(ref == NULL) return;

    if(i == n) cout<<ref->data<<endl;
    
    NthNodeEnd(ref->next, n, ++i);
    // cout<<ref->data<<endl;    
}
//using two pointer
void NthNodeEnd(int n){
    node* main_ptr = head;
    node* ref_ptr = head;

    if(head == NULL) return;
    //move the ref pointer to the nth beginning
    for (int i = 1; i < n; i++)
    {
        ref_ptr= ref_ptr->next;
        if(ref_ptr==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
    }
    //moving the ref_ptr and main_prt until ref_ptr reaches the end
    while (ref_ptr !=NULL && ref_ptr->next != NULL)
    {
        ref_ptr = ref_ptr->next;
        main_ptr = main_ptr->next;
    }
    cout<<"Node "<<n<<" from end is "<<main_ptr->data<<endl;    
}
//print middle nth node of the list

void middleNode(){//using two pointe
    node* slow_ptr = head;
    node* fast_ptr = head;

    if(head == NULL) return;

    while (fast_ptr != NULL && fast_ptr->next != NULL)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }

    cout<<"The middle node is "<<slow_ptr->data<<endl;
}

void middlenode(node* ref){
    int n = length();
    for (int i = 1; i <= n/2; i++)
    {
        ref = ref->next;
    }
    cout<<ref->data<<endl;
}

//frequency of a key in list

//recursive
int freqkey(node* ref, int key,int freqcy = 0 ){
    if(ref == NULL) return freqcy;

    if(ref->data == key) freqcy++;

    return freqkey(ref->next, key, freqcy);
}


int main(){

    // insertFirst(3);
    // insertFirst(2);
    node* second = new node();
    node* third = new node();
    node* fourth = new node();

    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next= NULL;

    insertbt(second, 6);
    int n;
    cin>>n;
    node* ref = head;
    search(n); //iterative
    

    insertbt(current,7);
    insertend(12);
    insertend(10);
    printlist();
    reverse();
    printlist();
    
    // cout<<length()<<endl; //iterative method
    // ref = head;
    // cout<<"Length new: "<<Count(ref)<<endl; //recursive method
    // int key; cin>>key;
    // ref = head;
    // (searchR(ref, key) > 0)? cout<<"Found"<<endl : cout<<"Not found"<<endl;//recursive

    ref = head;
    int pos; cin>>pos;
    cout<<"The element at "<<pos<<" is "<<nthNode(ref, pos)<<endl;
    ref = head;
    NthNodeEnd(pos); //using two pointer

    middleNode();//using two pointer

    middlenode(ref);//iteration
    int x; cin>>x;
    int output = freqkey(ref, x);
    cout<<output<<endl;

}