#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(int(s[i]) <= 90){
            ct++;
        }
    }
    cout<<ct<<endl;
}