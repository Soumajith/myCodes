#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        vector<pair<double, int>> sums;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        for (auto &it : v)
        {
            double a = pow(it.first, 2);
            double b = pow(it.second, 2);
            int sum = it.first + it.second;
            double res = sqrt((double)(a+b));
            sums.push_back({res, sum});
        }
        sort(sums.begin(), sums.end());
        long ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += sums[i].second;
        }
        cout << ans << endl;
    }
}
