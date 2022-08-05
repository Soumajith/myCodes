#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
class Stack
{
    
public:
int top;
    int a[MAX];
    Stack(){
        top=-1;
    }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if(top>= (MAX-1)){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x<<" pushed into the stack\n";
        return true;
    }
}
int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}

int main(){
    class Stack s;
    s.push(6);
    s.push(10);
    s.push(18);
    cout<<s.pop()<<" is popped from the stack \n";

    cout<<"Elements present in the stack are: ";
    while(!s.isEmpty()){
        cout<<s.pop()<<" ";

        
    }

}