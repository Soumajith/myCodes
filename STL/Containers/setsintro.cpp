//set is mostly like maps. maps stores key and value the set stores key only. all the commands work same on set /as maps
// timecomplexxity is same as map o(logn)
#include <bits/stdc++.h>
using namespace std;

void print(set<string>s){
    for (auto  &value : s)
    {
        cout<<value<<endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout<<(*it)<<endl;
    // }
    
} 
int main(){
    set<string>s;
    s.insert("abd");
    s.insert("djh");
    s.insert("hoo");
    s.insert("ksldh");
    s.insert("abd");
    //s.clear()  //to erase the set
    auto it = s.find("abd");
    if(it != s.end()) cout<<(*it)<<endl;
    
    auto ie = s.find("hoo");
    s.erase(ie);
    // s.erase("hoo");

    print(s);
}