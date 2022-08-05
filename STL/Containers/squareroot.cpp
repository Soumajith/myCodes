#include <bits/stdc++.h>
using namespace std;
double esp = 1e-6;
int multiply(double a, int n){
    double ans =1;
    for (int i = 0; i < n; i++)
    {
        ans*=a;
    }
    return ans;
}
int main(){
    double x;
    int n;
    cin>>x>>n;
    double lo = 1;
    double hi = x;
    while(hi-lo > esp){  //least minimum
        double mid =(hi+lo)/2;
        if(multiply(mid,n) < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    //time complexity of for the pth root of Number N and d demical places is -
    //O(p*log(N*(10^d)))
    cout<<setprecision(10)<<lo<<endl;
    cout<<hi<<endl;
}