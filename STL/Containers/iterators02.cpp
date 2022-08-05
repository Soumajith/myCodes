#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {2,3,4,5,6};
    vector<pair<int,int>>vp = {{2,3},{1,2},{4,5}}; 
    for(int &value:v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    for(pair<int,int> &p_value : vp)
    {
        cout<<p_value.first<<" "<<p_value.second<<endl;
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto &value2 : vp)
    {
        cout<<value2.first<<" "<<value2.second<<endl;
    }
    
    cout<<endl;
}