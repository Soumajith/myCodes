#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int N = 500;
    int arr[N];
    int o = 3;
    int e = 2;
    for (int i = 0; i < N; i++)
    {
        if(i%2 != 0){
            arr[i] = e;
            e+=2;
        }
        else{
            arr[i] = o;
            o+=2;
        }
    }
    while(t--){
        int n;
        cin>>n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            a[i] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
        

}