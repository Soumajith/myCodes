#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int f;
    if(n == 0) return 1;
    return n * fact(n-1); 
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}


// to know the Time complexity
//1. Number of function called -> n
//2. what is the complexity of each function -> O(1)
//so, O(n*1) = O(n)