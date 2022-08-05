#include <bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&v, int ele){
    int lo = 0, hi = v.size()-1;
    while(hi-lo > 1){
        int mid = (hi+lo)/2;
        if(v[mid]<ele){
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo]>= ele){
        return lo;
    }
    if(v[hi]>= ele){
        return hi;
    }
   
    return -1;
    
}
int upperbound(vector<int>&v, int ele){
    int lo = 0, hi = v.size()-1;
    while(hi-lo > 1){
        int mid = (hi+lo)/2;
        if(v[mid]<=ele){ //to eleminate the mid 
            lo = mid+1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo]> ele){
        return lo;
    }
    if(v[hi]> ele){
        return hi;
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
    sort(v.begin(),v.end());
    int ele;
    cin>>ele;
    int lb = lowerbound(v,ele);
    int ub = upperbound(v,ele);
    cout<<lb<<" "<<(lb != -1? v[lb] : -1)<<endl;
    cout<<ub<<" "<<(ub != -1? v[ub] : -1)<<endl;
}