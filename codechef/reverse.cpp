#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        string s; cin>>s;
        string rev = s.substr(0,k);
        s = s.substr(k);
        while(sqrt(k)>0){
            string temp = rev.substr(0,k);
            reverse(temp.begin(), temp.end()); //log n
            rev = temp+ rev.substr(k);
            k--;
        }
        //
        cout<<rev+s<<endl;
    }
}