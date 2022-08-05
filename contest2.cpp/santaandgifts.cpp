#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    unordered_map<int, int>house;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        house[x]++;
    }
    int ct = 0;
    for(auto pr : house){
        if(pr.second > k) ct++;
    }
    cout<<ct<<endl;
}