// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
int fact[N];

int binExp(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return ans;
}
// new alphabets -> K; length of password = n
//  number of combination = KCn
//  random rearragning of thee word = n!
// so the formula for random password combination = n! * KCn; //answer 
int main()
{
    
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = fact[n];
        ans = (ans *1LL* fact[k])%M;
        int deno = (fact[k-n] * 1LL * fact[n])%M;
        ans = (ans * 1LL * binExp(deno, M-2, M))%M;
        cout<<ans<<endl;
    }
}
//T.C. = t* logn