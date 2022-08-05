#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
//log base 2(n)
int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    int lcm = (a*b)/gcd(a,b);
    cout<<lcm<<endl;
    //you can use;
    cout<<__gcd(a,b)<<endl; //logn
    //for 3 numbers
    //int gcd = gcd(gcd(a,b),c);
    //for minimum fraction of two number a, b = a/b =(a/gcd(a,b))/(b/gcd(a,b));
}