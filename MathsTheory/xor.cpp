#include <bits/stdc++.h>
using namespace std;
/*Given an array of n size. all integers are in even count except one. Find that one element in O(n) T.C. and O(1) S.C.
*/
int main(){
    //number interchange
    // int a =5,b=8;
    // a = a ^ b;
    // b = b ^ a;
    // a = a ^ b;
    // cout<<a<<" "<<b<<endl;
    int n;
    cin>>n;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s ^=x;
    }
    cout<<s<<endl;
    
}