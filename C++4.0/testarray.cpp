#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    int a[n] = {temp}; 
    for(int i = 0; i < n -1; i++){
        a[i+1] = (arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    rotate(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}