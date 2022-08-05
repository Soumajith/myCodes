#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(5);
    s.push(7);
    s.push(9);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    queue<string>q;
    q.push("abc");
    q.push("jkl");
    q.push("uit");
    q.push("iop");
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}