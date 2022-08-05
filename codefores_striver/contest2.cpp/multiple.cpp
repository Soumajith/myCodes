#include <bits/stdc++.h>
using namespace std;
int main(){
    int set[20] = {3,5,6,9,10,12,15,18,20,21,24,25};
    int a, b, c;
    cin>>a>>b>>c;
    int val = set[c];
    
    while(val){
        if(val%a == 0){
            val = val/a;
            cout<<val<<" ";
        }
        else if(val%b == 0){
            val = val/b;
            cout<<val<<" ";
        }
        else if(val%a==0 && val%b==0){
            int v =(a*b)/(__gcd(a,b));
            val = val/v;
            cout<<val<<" ";
        }
        
    }
    
}