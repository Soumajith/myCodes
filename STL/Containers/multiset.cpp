#include <bits/stdc++.h>
using namespace std;
void print(multiset<string>&s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main(){
    multiset<string>s;
    s.insert("abd");
    s.insert("djh");
    s.insert("hoo");
    s.insert("ksldh");
    s.insert("abd");
    auto it = s.find("abd"); //on case of multiple key it points at first one
    if(it != s.end()) s.erase(it); //so only one key is removed
    
    // s.erase("abd"); //this erase all the keys with this
    print(s);
}