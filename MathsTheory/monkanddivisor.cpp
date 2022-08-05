//https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/
#include <bits/stdc++.h>
using namespace std;
//pre computaation using sieve algorithm
//as the iterator moves from the multiple fo the number so the factor will be stored in a hash array
//hash[p] + hash[q] - hash[lcm(p,q)] = answer
//lcm of p and q will give the common multiple (when both are taken into consideration)
const int N = 2e5+10;
int hsh[N]; //stores the count of the input number
int multiple_ct[N]; //stores the multiple count
int main(){
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        hsh[x]++;
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j+=i)
        {
            multiple_ct[i]+= hsh[j];
        }
    }
    // for (int i = 1; i < 10; i++)
    // {
    //     cout<<i<<" "<<multiple_ct[i]<<endl;
    // }

    int q; cin>>q;
    while(q--){
        int p , q;
        cin>>p>>q;
        long ans = multiple_ct[p] + multiple_ct[q];
        long long lcm = (p*1LL*q)/ __gcd(p,q);
        if(lcm<N) ans-= multiple_ct[lcm];  cout<<ans<<endl;
    }
}