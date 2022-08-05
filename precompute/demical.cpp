#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int sum=0;
    int i = 0;
    while(n>0){
        sum = sum +(n%10)*pow(2,i); 
        n=n/10; //0.1
        i++;
    }

    int ans=0;
    int i =0;
    while(n>0){
        //1 = 1 + 10*2 + 100 + 1000
        ans = ans + (n%2)*(pow(10,i));
        n = n/2;
        i++;
    }
    
    cout<<ans<<endl;
}