#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(long long i=0 ; i<n ; i++)
        {
            long long x=((int)s[i]-48)%10 ;
            if(x==0)
            { 
                continue;
            }
            else
            {
              x=10-x;
              k=k-x;
              if(k>=0)
              {
                  s[i]='0';
              }
              else
              {
                  break;
              }
            }
        }
        for(long long i=0 ; i<n ; i++)
        {
            if(s[i]!='0')
            {
                break;
            }
            else
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
}