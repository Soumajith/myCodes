#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int pile[N];
int n;
int hour;

bool minimum(int k){
    int banana=0;
    for (int i = 0; i < n; i++)
    {
        banana+=((pile[i]-1)/k)+1;
    }
    return banana<=hour;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>hour;
        for (int i = 0; i < n; i++)
        {
            cin>>pile[i];
        }
        int lo =0, hi=1e9, mid;
        while(hi-lo > 1){
            mid = (hi+lo)/2;
            if(minimum(mid))
                hi=mid;
            else
                lo = mid+1;
        }
        if(minimum(lo))
            cout<<lo<<endl;
        else
            cout<<hi<<endl;
    }
}