#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;
    if(n==1){
        cout<<"ERROR"<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int rec=-1;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>rec && arr[i]>arr[i+1]){
            
            ans++;
        }
        rec= max(rec, arr[i]);

    }
    cout<<ans<<endl;
    return 0;

}