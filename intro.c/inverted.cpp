#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        int am = x + (y/2);
        am = am*h;
        if(am<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
}