#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
    cin>>a>>b;
    if(a > b) swap(a,b);
    bool check = false;
    for (int i = (b/2) - 2; i <= b/2; i++)
    {
        if(((2*i )+ 1)== a && ((2*i )+ 2) == b ){
            check = true;
        }
    }

    if((b-a) == 2){
        cout<<"YES"<<endl;
    }
    else if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}