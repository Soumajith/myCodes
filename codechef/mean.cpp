#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>pre(n-1);
        for (int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        pre[0] = v[0];
        for(int i = 1; i<n-1; i++){
            pre[i] = pre[i-1] + v[i];
        }
        pre.push_back(v[n-1]);
        double sp = pre[n-2];
        double p = sp/(n-1);
        double q = pre[n-1];
        cout<<fixed<<setprecision(6)<<p+q<<endl;
    }
}