#include <bits/stdc++.h>
using namespace std;
//O(logNbase2)
int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    
    int find;
    cin>>find;
    int lo = 0;
    int hi = n-1;
    while(hi-lo > 1){
        int mid = (hi+lo)/2;
        if(v[mid]< find){
            lo = mid +1;
        }
        else{ //greater than find
            hi = mid;
        }
    }
    if(find==v[hi]){
        cout<<hi+1<<endl;
        }
    else if(find == v[lo]){
        cout<<lo+1<<endl;
    }
    else{
        cout<<"NOT FOUND";
    }
}