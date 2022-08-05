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
    int MAX = INT_MIN;
    int MIN= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        MAX = max(MAX, arr[i]);
        MIN = min(MIN, arr[i]);
    }
    cout<<MAX<<" "<<endl;
    cout<<MIN<<" "<<endl;

    return 0;
    
}