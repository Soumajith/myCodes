#include <iostream>
using namespace std;

void countSort(int arr[], int n){
    int k = arr[0]; 
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    
    int countarr[10] = {0};

    for (int i = 0; i < n; i++)
    {
        countarr[arr[i]]++;
    }
    for (int i = 1; i <= k; i++)
    {
        countarr[i]+=countarr[i-1];
    }
    
    int ans[n];

    for (int i = n-1; i>=0; i--)
    {
        ans[--countarr[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
int main(){
    
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;

}