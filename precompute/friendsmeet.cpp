#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        int n = N - 1;
        int count = 0;
        for (long long i = 1; i*i <= n; i++)
        {
            if (n % i == 0) //2
            {
                if (n / i == i)
                {
                    count++;
                }
                else count += 2;
            }
        }
        
        cout << count << endl;
    }
}