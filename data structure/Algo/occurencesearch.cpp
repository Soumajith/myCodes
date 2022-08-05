#include <bits/stdc++.h>
using namespace std;
int firstandlastoccur(vector<int> &v, int key){
    int first,last;
    int lo = 0, hi = n-1, mid;
    //first
    while (hi-lo>1)
    {
        mid = (hi+lo)/2;
        if(v[mid] >= key){
            first = mid;
            hi = mid-1;
        }
        else
            lo = mid+1;
    }
    return first;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int x; cin>>x;
    auto first = firstoccur(v,n,x);
    auto last = lastoccur(v,n,x);

    cout<<first<<endl;
    cout<<last<<endl;
}