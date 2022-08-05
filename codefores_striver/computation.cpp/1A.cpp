#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int ct=0;
            while(n>0){
                ct+=(n*n);
                n-=2;
            }
            cout<<ct<<endl;
        
    }
}