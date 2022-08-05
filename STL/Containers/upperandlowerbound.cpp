#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    // int arr[n];
    cin>>n;
    vector<int>arr(n);
    map<int,int>m;
    set<int>s;
    for (int i = 0; i < (int)1e6; i++)
    {
        s.insert(rand());
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // sort(arr.begin(),arr.end());
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for (inr i = 0; i < (int)1e6; i++)
    {
        auto it = s.upper_bound(rand());  //use this for maps and sets as it is implemented through trees
    }
    
    // auto it = upper_bound(arr.begin(),arr.end(),7);
    // cout<<(*it)<<endl;
    // int *ptr = lower_bound(arr,arr+n,5);   //use this for vector and array as it it implemented using binary search
    
    // cout<<(*ptr)<<endl;
    // int *p = upper_bound(arr,arr+n, 25);
    // if(p == arr+n){
    //     cout<<"NOT FOUND";
    //      return 0;
    // }
    // cout<<(*p);
    
}