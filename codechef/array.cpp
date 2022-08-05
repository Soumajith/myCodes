#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n]={8,-9,5,1,15};
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}