#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    const int N = 1e6 + 2;
    bool a[N];
    for (int i = 0; i < N; i++)
    {
        a[i]= false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=0)
        {
            a[arr[i]]= true;
        }
    }
    int ans=-1;
    for (int i = 1; i < N; i++)
    {
        if(a[i] == false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}