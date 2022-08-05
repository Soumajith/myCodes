#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

//merge sort
void merge(int l, int r, int mid){

    int l_sze = mid - l + 1;  
    int L[l_sze+1]; 
    int r_sze = r - mid;
    int R[r_sze +1];

    for (int i = 0; i < l_sze; i++)
    {
        L[i] = a[i+l];
    }
    for (int i = 0; i < r_sze; i++)
    {
        R[i] = a[i+mid+1];
    }
    
    L[l_sze] = R[r_sze] = INT_MAX;   //so that the merge continues even if one slot is sorted already
    int l_i = 0;                     //to remember the index of the sorted array
    int r_i = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[l_i] <= R[r_i])
        {
            a[i] = L[l_i];
            l_i++;
        }
        else{
            a[i] = R[r_i];
            r_i++;
        }
    }
}

void mergesort(int l, int r){
    int mid = (l+r)/2;
    if(l==r) return;
    mergesort(l, mid);
    mergesort(mid+1, r);
    merge(l, r, mid);       //after returned;
}
//time complexity of merge sort is nlogn. because, 
//the no. the step is log base 2(n) and the computation is n;

int main(){
    int n;
    cin>>n;
    // int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];     //change to a to arr for selection sort;
    }
    
    //selection sort
    // for (int i = 0; i < n; i++)
    // {
    //     int mindex = i;
    //     for (int j = i+1; j < n; j++)
    //     { 
    //         if(arr[j]<arr[mindex]) {mindex = j;}            
    //     }
    //     swap(arr[i], arr[mindex]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    mergesort(0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}