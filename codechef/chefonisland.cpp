#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x, y, xi, yi, d;
        cin>>x>>y>>xi>>yi>>d;
        int f = x/xi;
        int w = y/yi;
        int need = min(f,w);
        if(need>=d){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}