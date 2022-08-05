#include <bits/stdc++.h>
using namespace std;
int main(){
    
        int n; 
        cin>>n;
        int c=0; //1010
        while(n){
            if((n&1) == 0) c++;
                n= n>>1;
            
        }
        cout<<c<<endl;
    
}