#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    bool ans = false;
    int p,q = 0;

    int r = n-1;
    int c = 0;
    while (r>0 && c<m)
    {
        if (a[r][c] == x)
        {
            ans = true;
            p = r;
            q = c;
            break;
        }
        if (a[r][c] > x)
        {
            r--;
        }
        else
        {
            c++;
        }
    }
    if (ans == true)
    {
        cout<<"the number is found at "<<p<<" "<<q<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    
    }
    return 0;
}