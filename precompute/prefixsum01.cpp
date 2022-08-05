#include <bits/stdc++.h>
using namespace std;
/*Given array a of N integers. Given q queries and in each query given L and R
 print sum of array elements from index L to R(L,R included)*/
const int n = 1e5 + 10;
int a[n];
int pf[n];
int main()
{
    int N;
    cin>>N;
    for (int i = 1; i <= N; i++)
        {
            cin >> a[i];
            pf[i] = pf[i - 1] + a[i];
        }
    int t;
    cin>>t;
    while (t--)
    {
        
        int l, r;
        cin>>l>>r;
        cout<< pf[r] - pf[l-1] <<endl;
    }
}