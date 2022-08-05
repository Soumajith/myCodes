#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int N , S, J, m;
    int arr[N];
    cin>>N>>S;
    
    for(int i= 0; i< N; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<N; i++){
        min(arr[i], m);
    }
    if(m < S){
        J = S-m;
    }
    else{
        J = m-S;
    }
    cout<<J;
    return 0;
}