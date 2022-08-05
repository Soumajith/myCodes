#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int arr[N];
int main(){
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int q; cin>>q;
    while(q--){
        int pos, k; cin>>pos>>k;
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[pos] + arr[i] == k) ct++;
            else if(arr[i] == k) ct++;
        }

        cout<<ct<<endl;
    }
    
}