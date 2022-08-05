#include <bits/stdc++.h>
#define ll int
using namespace std;
const int N = 1e5+10;
int positions[N];
int cows;
int n;

bool isCow(ll space){
    ll lastpos = -1;
    ll cows_ct = cows;
    for (int i = 0; i < n; i++)
    {
        if(positions[i] - lastpos>=space || lastpos==-1){
            cows_ct--;
            lastpos = positions[i];
        }
        if(cows_ct == 0) break;
    }
    return (cows_ct == 0);
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>cows;
        for (int i = 0; i < n; i++)
        {
            cin>>positions[i];
        }
        sort(positions,positions+n);
        ll lo = 0, hi = 1e9;
        while(hi - lo > 1){
            int mid = (lo+hi)/2;
            if(isCow(mid))
                lo = mid;
            else
                hi = mid-1;
        }
        if(isCow(hi)) 
            cout<<hi<<endl;
        else cout<<hi<<endl;
    }
}