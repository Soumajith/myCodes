#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hash1[N];

int main()
{
    int N;
    cin>>N;
    int a[N];
    for(int i=0 ; i<N ; i++)
    {
        cin>>a[i];
        hash1[a[i]]++;
    }
    //precomputation->
    //--------------
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hash1[x]<<endl;
    }
    return 0;
}