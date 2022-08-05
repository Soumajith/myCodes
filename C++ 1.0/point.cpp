#include <bits/stdc++.h>
using namespace std;
int main(){
    int a =10;
    int *ap = &a;
    scanf("%d", &a);
    cout<<a<<" ";

    *ap = *ap+1;

    cout<<a<<" ";

    
    cout<<*ap<<endl;

    return 0;
}