#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&m){
    cout<<m.size()<<endl;
    for (auto &v : m)
    {
        cout<<v.first<<" "<<v.second<<endl;
    }
}
int main(){
    unordered_map<int,string>m;
    m[1] = "dhg";
    m[2] = "lsgh";
    m[6] = "kflgj";
    m.insert({4,"sjng"});
    print(m);
}