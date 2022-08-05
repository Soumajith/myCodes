#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>divisors[N];
int sum[N];
int main(){
    // int n;
    // cin>>n;
    // int ct =0, sum =0;
    // for (int i = 1; i*i<= n; i++)
    // {
    //     if(n%i == 0){
    //         cout<<i<<" "<<n/i<<endl;
    //         ct++;
    //         sum +=i;
    //         if(i != n/i){
    //             ct++;
    //             sum+=n/i;
    //         }
    //     }
    // }

    // cout<<ct<<" "<<sum<<endl;
    //using prime factorisation x = (p1^n1)*(p2^n2)*(p3^n3)....
    //count of divisor = (n1+1)*(n2+1)*(n3+1)..........
    //sum of divisor (using of GP Series) = {(p1^(n1+1) -1)/(p1-1)}*{(p2^(n2+1) -1)/(p2-1)}*{(p3^(n3+1) -1)/(p3-1)}
    
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j+=i)
        {
            divisors[j].push_back(i);
            sum[j]+=i;
        }
    }
    //nlogn
    for (int i = 1; i <= 10; i++)
    {
        for(auto v: divisors[i]){
            cout<<v<<" ";
        }
        cout<<endl;
        cout<<sum[i]<<endl;
        
    }
    
}