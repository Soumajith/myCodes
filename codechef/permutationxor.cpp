#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        long long value = 0;
        if(n&1){
            for (long long i = 1; i <= n-1; i+=2)
            {
                value += 2*(i^(i+1));
            }
        }
        else{
            for (long long i = 1; i <= n; i+=2)
            {
                value += 2*(i^(i+1));
            }

        }
        cout<<value<<endl;
    }
}