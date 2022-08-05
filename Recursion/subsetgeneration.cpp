#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets; // as it will return the vector of vector of the subset
void generate(vector<int> &subset, int i, vector<int> &num)
{

    if (i == num.size())
    {
        subsets.push_back(subset);
        return;
    }
    // the element is not in subset
    generate(subset, i + 1, num);

    // the element is in the subset
    subset.push_back(num[i]);
    generate(subset, i + 1, num);
    subset.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<int> empty; // empty subset for passing
    generate(empty, 0, num);

    for (auto val : subsets)
    {
        for (auto vo : val)
        {
            cout << vo << " ";
        }
        cout << endl;
    }
}