//inclusive exclusive principle
#include <iostream>
using namespace std;

//a number divisible by 5 or 7
int divisible(int n, int a, int b){
    int n1 = n/a;
    int n2 = n/b;
    int n3 = n/(a*b);

    return n1+n2-n3;
}

//Euclid Algorithm to find GCD
int gcd(int a, int b){
    int rem = INT_MAX;
    while (rem != 0)
    {
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}
int main(){
    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n, a, b)<<endl;
    cout<<gcd(42, 24);
    return 0;
}