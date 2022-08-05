#include <bits/stdc++.h>
using namespace std;
bool isPossible(int min, int a, vector<int> &c){
    int total_t=0;
    int i = 0;
    while(i<c.size())
    {
        if(c[i] > min) return false;

        int s = c[i++];
        while(i<c.size() && s+c[i] <= min){
            s+=c[i];
            i++;
        }
        total_t++;
    }
    return total_t<=a;
}
int paint(int a, int b, vector<int> &c){
    const int mod = 1e7+3;
    int lo = 0, hi =accumulate(c.begin(),c.end(),0), mid;
    int ans;
    while(hi-lo > 1){
        mid = (lo+hi)/2;
        if(isPossible(mid,a,c)){
            ans = mid;
            hi = mid-1;
        }
        else 
            lo = mid+1;
    }
    return ans;
}
int main(){
    int n; cin>>n;
    vector<int>c(n);
    int a,b;
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    int res = paint(a,b,c);
    cout<<res<<endl;

}