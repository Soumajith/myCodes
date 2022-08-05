#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int a[n1][n2], b[n2][n3];

    int ans[n1][n3];
    cout<<"First Matrics"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Second Matrics"<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j]=0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += a[i][k]*b[k][j];
            }
            
        }
    }
    //print
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}