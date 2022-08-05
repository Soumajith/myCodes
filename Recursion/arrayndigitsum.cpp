#include <bits/stdc++.h>
using namespace std;
//digit sum
int digit(int n){
    if(n==0) return 0;
    return n%10 + digit(n/10);
}
//array sum
int sum(int n, int arr[]){
    if(n < 0) return 0;
    return sum(n-1, arr) + arr[n];
}
int main(){
    int n;
    cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    //cout<<sum(n-1, arr);
    cout<<digit(n)<<endl;
}

//time complexity of digit dum = O(log n);