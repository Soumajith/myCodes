#include <bits/stdc++.h>
using namespace std;
double eps = 1e-6; //number of precision decimal

double multiply(double x, int n){
    double res=1;
    for (int i = 0; i < n; i++)
    {
        res *= x;
    }
    return res;
}
int main(){
    double x;
    int n;
    cin>>x>>n;
    double lo = 1, hi = x, mid;

    while(hi-lo > eps){
        mid = (lo+hi)/2;
        if(multiply(mid,n) > x){
            hi = mid;
        }
        else{
            lo = mid;
        }
    }
    cout<<setprecision(10)<<lo<<endl;
}
