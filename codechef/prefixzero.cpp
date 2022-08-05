#include <bits/stdc++.h>
using namespace std;

long long cal(long long m, string s)
{
    long long add = 0;
    for(int i=m;i>=0;i--)
    {
        long long v = (int(s[i])-int('0')+add)%10;
        if(v==0)
            continue;
        add+=10-v;
    }
    return add;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        long long l=0,r=n-1,ans=0;
        while(l<=r)
        {
            long long m=(l+r)/2;
            if(cal(m,str)>k)
                r=m-1;
            else
            {
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<endl;
    }
}