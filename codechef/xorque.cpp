#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;

        int x = 2;
        for (int i = 0; i < n; i++)
        {
            int x1 = (x<<1)+1;
            x*=2;
            cout<<x1<<" ";
        }
        cout<<endl;
    }
}