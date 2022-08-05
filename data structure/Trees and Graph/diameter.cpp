#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
vector<int>g[N];
void dfs(int vertex, int par=-1){
    for(int child:g[vertex]){
        if(child==par) continue;
        m
    }
}
int main(){
    int n; cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        int x, y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
}
