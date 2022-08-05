#include <bits/stdc++.h>
using namespace std;

void printV(vector<pair<int,int>> &v){
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }    
    cout<<endl;
}
int main(){
    vector<pair<int,int>>v;// = {{1,2}, {2,3}, {3,6}};
    printV(v);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});  //instead of {x,y} one can use make_pair(x,y)
    }
    printV(v);
}