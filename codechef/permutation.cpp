//LOCKDRAW
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        int arr[n];
        if(k==1){
            if(n==1){
                cout<<1<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = i+1;
        }

        k = n-k;

        for (int i = 1; i <= k; i++)
        {
            arr[i] = arr[i+1];
        }
        
        arr[k+1] = 2;

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}