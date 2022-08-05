//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1/?category[]=DFS&category[]=DFS&page=1&query=category[]DFSpage1category[]DFS#
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>graph[N];
bool visited[N];

bool dfs(int vertex, int par){
    visited[vertex] = true;
    bool isLoop = false;

    for(auto child : graph[vertex]){
        if(visited[child] && child == par) continue; //skips the parent
        if(visited[child]) return true;
        isLoop |= dfs(child, vertex);
    }

    return isLoop;
}
int main(){
    int  n, m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bool isLoop = false;
    for (int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        if(dfs(i,0)){
            isLoop = true;
            break;
        }
    }
    cout<<isLoop<<endl;
}