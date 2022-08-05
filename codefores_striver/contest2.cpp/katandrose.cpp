#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 1e9+7;
const int N = 1e6+10;
ll fact[N];
vector<ll>rose(N,0);
int main(){
    fact[0] =1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i-1]*1LL*i)%m;
    }

    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        ll x;cin>>x;
        ll c = log2(x);
        rose[c]++;  
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<rose[i]<<endl;
    // }
    
    ll ct_even = 0, ct_odd = 0;
    for (int i = 0; i < N; i++)
    {
        if(i==0) ct_even+=rose[i];
        else if(i&1) ct_odd+=rose[i];
        else ct_even +=rose[i];
    }

    ll ans = 0;
    for (int i = 1; i <= ct_even; i++)
    {
        ans+=fact[ct_even]/(fact[i]*fact[ct_even-i]);
    }
    for (int i = 1; i <= ct_odd; i++){
        ans+=fact[ct_odd]/(fact[i]*fact[ct_odd-i]);
    }
    
    cout<<ans<<endl;
}