#include <bits/stdc++.h>
using namespace std;
int bsearch(vector<int>v, int n, int key){
    int lo = 0, hi=n-1, mid;
    while (hi-lo>0)
    {
        mid = (hi+lo)/2;
        if(v[mid] == key)
            return mid;
        
        if(v[mid] <=v[hi]){
            if(key>v[mid] && key<=v[hi])
                lo = mid+1;
            else
                hi = mid -1;
        }
        else{
            if(key>=v[lo] && key<v[mid])
                hi = mid -1;
            else
                lo = mid+1;
        }
    }
    return -1;
}
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int x; cin>>x;
    auto pos = bsearch(v, n, x);
    cout<<pos<<endl;
}
