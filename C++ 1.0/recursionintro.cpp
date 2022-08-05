#include <iostream>
#include <cmath>
using namespace std;

//sum till n using recursion, solving the problem by calling function again and again
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    int s = sum(n-1);
    return n + s;
}
//power of n
int power(int n, int p){
    if ( p == 0)
    {
        return  1;
    }
    int x = pow(n,p-1);
    return n * x;
}
 //factorial
int factor(int n){
    if (n==0)
    {
        return 1;
    }
    int result = factor(n-1);
    return n * result;
}
//fibonacci series
int fibonacci(int n){
    if (n==0 || n ==1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){

    cout<<sum(4)<<endl;
    cout<<power(2, 4)<<endl;
    cout<<factor(4)<<endl;
    cout<<fibonacci(7)<<endl;

    return 0;
}