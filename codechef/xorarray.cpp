#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n + 1];
        arr[0] = 0;
        arr[1] = 1;
        for (long long i = 2; i < n+1; i++)
        {
            arr[i]=i^(i-1);
        }
        for (long long i = 1; i <= n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
