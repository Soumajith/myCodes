#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    int *pa = &a;
    int *pb = &b;
    swap(pa, pb);
    cout<<a<<" "<<b;
    return 0;
}