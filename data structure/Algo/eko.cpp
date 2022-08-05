#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6+10;
ll n;
ll m;
ll trees[N];

bool isSufficient(int h){
    ll wood = 0;
    for(int i=0;i<n;i++)
        if(trees[i] >= h)
            wood+=(trees[i] - h);
    return wood>=m;
}
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>trees[i];
    }
    ll lo=0, hi=1e9, mid;

    while(hi-lo > 1){
        mid = (hi+lo)/2;

        if(isSufficient(mid)){
            lo = mid;
        }
        else
            hi=mid-1;
    }

    if(isSufficient(hi))
        cout<<hi<<endl;
    else
        cout<<lo<<endl;
    
}