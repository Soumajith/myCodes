#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 1; i<=n; i++) {
        cin>>v[i];
    }
    
    int q; //query
    cin>>q;
    while(q--){
        int ele;
        cin>>ele; //element to be found
        auto it = lower_bound(v.begin(),v.end(),ele); //iterator return
        
        if(*it != ele){
            cout<<"No"<<" "<<it-v.begin()<<endl;  //it-v.begin() returns index of the ele
        }
        else{
            cout<<"Yes"<<" "<<it-v.begin()<<endl;
        }
    }
    return 0;
}
