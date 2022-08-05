#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int>&num){
    int n = num.size();
    int subset_ct = (1<<n); //2^n 
    // cout<<subset_ct<<endl;
    vector<vector<int>>subsets;
    for (int j = 0; j < subset_ct; j++)
    {
        vector<int>subset;
        for (int i = 0; i < n; i++)
        {
            if((j & (1<<i)) != 0){
                subset.push_back(num[i]);
            }
        }
        subsets.push_back(subset);   
    }
    return subsets;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    auto all_subsets = subsets(v);
    for (auto &val : all_subsets)
    {
        for (auto &ele : val)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    //T.C. = O(n *(2^n))
}