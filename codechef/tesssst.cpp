#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0,count=1;
        float min;
        vector<int> min_x;
        vector<int> min_y;
        vector<float> dist;
        cin>>n>>k;
        for(int i=0 ; i<n ; i++)
        {
            float x,y;
            cin>>x>>y;
            dist.push_back(sqrt((x*x)+(y*y)));
            min = dist[0];
            // if(dist[i]<min)
            // {
            //     min=dist[i];
            //     min_x.push_back(x);
            //     min_y.push_back(y);
            // }
        }
        for(int j=0 ; j<k ; j++)
        {
            cout<<min_x[j]<<" "<<min_y[j]<<endl;
            sum=sum+min_x[j]+min_y[j];
        }
        //cout<<sum<<endl;
    }
    return 0;
}