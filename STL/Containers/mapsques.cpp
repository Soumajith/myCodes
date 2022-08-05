// Given N string, print unique strings in lexographical order with their frequency
// n -> 10000
// s=> 100
#include <bits/stdc++.h>
using namespace std;
void print(map<string,int>&m){
    cout<<m.size()<<endl;
    for (auto &pr : m)   //O(logn) for accessing and for loop it is O(nlogn)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for (int i= 0; i < n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    print(m);
}