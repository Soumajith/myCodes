#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {2,5,9,25,1,8,10};
    sort(arr+3,arr+7); //this sort keyword uses quick sort, heap sort and insertion sort
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>v(7);
    v = {2,5,9,25,1,8,10};
    sort(v.begin()+4,v.end()); //worst case O(nlogn)
    for (int i = 0; i < 7; i++)
    {
        cout<<v[i]<<" ";
    }
    
}