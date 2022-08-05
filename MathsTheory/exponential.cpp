#include <bits/stdc++.h>
using namespace std;
const int m= 1e9 +7;
int binexpRecur(int a, int b){
    if(b==0) return 1;
    int res = binexpRecur(a,b/2);
    if(b&1){  //returns if odd
        // return a * binexpRecur(a,b/2) * binexpRecur(a,b/2);
        return (a * (res * 1LL * res)%m)%m;
    }
    else{
        // return binexpRecur(a,b/2) * binexpRecur(a,b/2);
        return (res * 1LL * res)%m; //modular code
    }
}

int binexpIter(int a, int b){
    int ans = 1;
    while(b){
        if(b & 1){
            ans = (ans * 1LL * a)%m;
        }
        a = (a* 1LL *a)%m;
        b >>=1;
    }
    return ans;
}
//t.c. = O(log b);
int main(){
    int a= 2, b=13;
    // int ans =1;
    // for (int i = 0; i < b; i++)
    // {
    //     ans *= a;
    //     ans %= m;

    // }
    // cout<<ans<<endl; //meth
    
    cout<<binexpRecur(a,b)<<endl;
    cout<<binexpIter(a,b)<<endl;
}