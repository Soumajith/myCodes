#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>graph[N];
int par[N];
dfs(int v, int par=-1){

}
int main(){
    int n; cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        int x,y; cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int> path(int v){
        
    }
}