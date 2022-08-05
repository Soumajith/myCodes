#include <bits/stdc++.h>
using namespace std;
void check(unordered_set<string>&s, string c){
    auto it = s.find(c);
    if(it != s.end()) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;
}
int main(){
    int n,q;
    cin>>n>>q;
    unordered_set<string>set;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        set.insert(s);
    }
    while(q--){
    string c;
    cin>>c;
    check(set,c);
    }
}