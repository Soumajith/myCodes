#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int k = 2;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int m;
            m = n/k;
            k++;
            if(k==n) break;
        }
        //not completed;
    }
}