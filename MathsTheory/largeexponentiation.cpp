#include <bits/stdc++.h>
using namespace std;
const long long M = 1e18 + 7;
//a <= 10^18  //M<= 1e18
int binExp(long long a, long long b){
    int ans = 1;
    while(b){
        if(b&1){
            //ans = (ans * 1LL * a) % M;
            ans = binMultiply(ans,a);
        }
        //a = (a * 1LL * a)%M;
        a = binMultiply(a,a);
        b >>= 1;
    }
    return ans;
}
//for multiplication of 10^18 and 10^18
long binMultiply(long long a, long long b){
    long ans = 0;
    while(b){
        if(b&1){
            ans = (ans + a)% M;
        }
        a = (a+a)%M;
        b>>=1;
    }
    return ans;
}
int main(){
    int a =2,b=10;
    int ans = binExp(a,b);
    cout<<ans<<endl;
}