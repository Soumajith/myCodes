#include <bits/stdc++.h>
using namespace std;
void wavesort(int arr[], int n){

    for (int i = 1; i < n-1; i+=2)
    {
        if (arr[i] > arr[i-1])
        {
            swap(arr[i], arr[i-1]);
        }
        else if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
    
}
int main(){

    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    
    wavesort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}