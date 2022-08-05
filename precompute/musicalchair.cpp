#include <iostream>
#include<cmath>
typedef long long ll;
using namespace std;

ll getK(ll n){
    if(n==2) return 1;
    int squareRoot = ceil(sqrt(n-1));
    //cout<<"ans"<<squareRoot<<endl;
    int ans = 0;
    for(int i = 1;i<squareRoot;i++){
        if((n-1)%i==0) ans+=2;
    }
    if(squareRoot*squareRoot==n-1){
        ans+=1;
        //cout<<"why"<<endl;
    }
    return ans;
}



int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll k = getK(n);
        cout<<k<<endl;


    }
    return 0;
}