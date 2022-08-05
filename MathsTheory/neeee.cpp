#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int N = 100;
    string s = "abcdefghij";
    string a;
    for (int i = 0; i < N; i++)
    {
        a = a+s;
    }
    
    while(t--){
        int n; cin>>n;
        cout<<a.substr(0,n)<<endl;
    }
}