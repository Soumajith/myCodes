#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int c_size = n + m;
        vector<int> a(n), b(m), c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < m; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;

        for (int i = 0; i < c_size; i++)
        {
            
            if (a[1] < b[1])
            {
                c.push_back(a[1]);
                a.erase(a.begin());
                
            }
            else
            {
                c.push_back(b[1]);
                b.erase(b.begin());
            }
        }
        for (int i = 0; i < c_size; i++)
        {
            cout<<c[i]<<endl;
        }
        
        
    }
}
