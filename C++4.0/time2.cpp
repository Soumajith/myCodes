// ok got it
// follow the hollow
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    while(t--)
    {
        cin>>n>>k;
        int x,y;
        int parking[n][n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>x>>y;
            parking[x][y]= 1;
        }
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                count+=parking[i][j];
            }
        }
    }
    return 0;
}

/*

n=3
k=2

3 2
1 2 - A
1 3 - B
2 3 - C

     1    2    3

1    -    A    B

2    -    -    C

3    -    -    -

*/