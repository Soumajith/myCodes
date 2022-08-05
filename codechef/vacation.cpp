#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        string s;
        cin>>s;
        vector<int>binary(n);
        for (int i = 0; i < n; i++)
        {
            binary[i] = s[i] - 48;
        }
        int ct_0 = count(binary.begin(), binary.end(), 0);
        int ct_1=  count(binary.begin(), binary.end(), 1);

        int ct =0;
        int n_vac = 0;
        for (int i = 0; i < n; i++)
        {
        
            if(binary[0] == 0){
                ct++;
                binary.erase(binary.begin());
                if(x == ct){
                    n_vac++;
                    ct = 0;
                }
            }
            else{
                if(ct<x){
                    ct++;
                    if(ct == n_vac){
                        n_vac++;
                        ct = 0;
                    }
                }
            }

        }
        cout<<n_vac<<endl;
        


        // if(ct_0%x != 0){
        //     ct_0++;
        //     ct_1--;
        //     cout<<(ct_0/x)<<endl;
        // }
        // else{
        //     cout<<(ct_0/x)<<endl;
        // }
    }
}