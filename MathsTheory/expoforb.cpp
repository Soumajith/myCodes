#include <bits/stdc++.h>
using namespace std;
int binExp(int a, long long b, int m){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%m;
        }
        a = (a * 1LL * a)% m;
        b>>=1;
    }
    return ans;
}
int main(){
    int a, b, c, m;
    cin>>a>>b>>c;
    m = 1e9+7;
    cout<<binExp(a, binExp(b,c,m-1), m)<<endl;
}