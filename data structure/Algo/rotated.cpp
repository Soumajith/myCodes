#include <bits/stdc++.h>
using namespace std;
int circularrotated(vector<int> v, int n){
    int lo = 0, hi = n-1, mid;
    while (hi-lo > 0)
    {
        if(v[lo] <= v[hi]) return lo;

        int mid = (lo+hi)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n;

        if(v[mid]<= v[next] && v[mid]<=v[prev])
            return mid;

        else if(v[mid] <= v[hi])
            hi = mid-1;

        else if(v[mid] >= v[lo])
            lo = mid+1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    auto rotation = circularrotated(v,n);
    cout<<rotation<<endl;
}