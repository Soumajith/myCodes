#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool>prime(N,1);
vector<int> hi(N), lo(N);
int main(){
    
    // int n;
    // cin>>n;
    
    //normal algo
    // for (int i =2; i*i <= n; i++)
    // {
    //     while (n%i == 0)
    //     {
    //         prime.push_back(i);
    //         n = n/i;
    //     }
    // }
    // if(n>1) prime.push_back(n);
    // for (auto pr : prime)
    // {
    //     cout<<pr<<endl;
    // }


    //Sieve algorithm
    prime[0] =prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if(prime[i]==true){
            lo[i] = hi[i] = i;
            for (int j = 2*i; j < N; j+=i)
            {
                prime[j] = false;
                hi[j] = i;
                if(lo[j] == 0){
                    lo[j] = i;
                }
            }
        }
    }
    //print highest and lowest factor of a number;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<lo[i]<<" "<<hi[i]<<endl;
    // }
    

    //Prime factorisation print
    int num;
    cin>>num;
    vector<int>prime_factors;
    while(num>1){
        int prime_factor = hi[num];
        while(num%prime_factor==0){
            num /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    for(auto p: prime_factors){
        cout<<p<<" ";
    }
    cout<<endl;


    //prime factorisation with count
    map<int,int>primes;
    cin>>num;
    while(num>1){
        int prime_f = hi[num];
        while(num%prime_f ==0){
            num/= prime_f;
            primes[prime_f]++;
        }
    }
    for(auto ps : primes){
        cout<<ps.first<<" "<<ps.second<<endl;
    }


    // CHECK of prime number
    // int q;
    // cin>>q;
    // while(q--){
    //     int n;cin>>n;
    //     if(prime[n]==true){
    //         cout<<"Prime"<<endl;
    //     }
    //     else{
    //         cout<<"Not a prime"<<endl;
    //     }
    // }
    //T.C. = Q*N*(log(log N))
}