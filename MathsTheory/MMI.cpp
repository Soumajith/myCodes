#include <bits/stdc++.h>
using namespace std;
int binaryExp(int a, int b, int m){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%m;
        }
        a = (a*1LL*a)%m;
        b>>=1;
    }
    return ans;
}
/*There are N childern ans K toffees, K<N 
count the number ways to distribute toffee among N students such that each students 1 Toffee only
formula nCk;
N<10^6, K<N<10^6
using %m = 1e9+7
*/
const int N = 1e6+10;
int fact[N];
int main(){
    int m = 1e9+7;
    fact[0] =1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i-1]*1LL*i)%m;
    }
    int q; cin>>q;
    while(q--){

        int n, k;
        cin>>n>>k;
        int numr =  fact[n];
        cout<<numr<<endl;
        int deno = (fact[n-k]*1LL*fact[k])%m;
        cout<<binaryExp(deno, m-2, m)<<endl;
        int ans = (numr * binaryExp(deno, m-2, m))%m;
        cout<<ans<<endl;
        
    }
}