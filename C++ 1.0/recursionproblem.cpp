#include <iostream>
using namespace std;
//check if a array id sorted  or not
bool sort(int arr[], int n){
    if (n ==1)
    {
        return true;
    }
    
    bool remain = sort(arr+1, n-1);
    return (arr[0]<arr[1] && remain);
}

//decreasing order print of a number
void dec(int n){
    if (n==0)
    {
        return;
    }
    
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if (n == 0)
    {
        return;
    }

    inc(n -1);
    cout<<n<<" ";
}
//first and second occurence in array
int firstocc(int arr[], int n, int i, int key){ //i = pointer and key = the element to be searched
    if (i == n)
    {
        return -1;
    }
    
    if (arr[i] == key)
    { 
        return i;
    }
    return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key){
    if (i == n)
    {
        return -1;
    }
    
    int restarray = lastocc(arr, n, i+1, key);

    if (restarray != -1)
    {
        return restarray;
    }
    
    if (arr[i] == key){
        return i;
    }
    return -1;
    
}
int main(){

    // int a[6] = {1,2,3,6,0,5}; 
    // if (sort(a, 6))
    // {
    //     cout<<"The array is sorted"<<endl;
    // }
    // else
    // {
    //     cout<<"The array is not sorted"<<endl;
    // }
    // dec(11);
    // cout<<" "<<endl;
    // inc(10);

    int a[6] = {3,2,4,5,2,0};
    cout<<firstocc(a, 6, 0, 2)<<endl;
    cout<<lastocc(a, 6, 0, 2)<<endl;

    return 0;
}