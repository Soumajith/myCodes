#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    while(n--){
        cout<<arr[n]<<" ";
    }
    
}