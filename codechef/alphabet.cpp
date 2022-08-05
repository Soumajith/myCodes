#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    bool hsh[26];
    for (int i = 0; i < 26; i++)
    {
        hsh[i] = false;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        int c = s[i] - 'a';
        hsh[c] = true;
    }
    
    int t; cin>>t;
    while(t--){
        string a;
        cin>>a;
        bool flag = true;
        for (int i = 0; i < a.length(); i++)
        {
            int c = a[i] - 'a';
            if(hsh[c] != true){
                flag = false;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}