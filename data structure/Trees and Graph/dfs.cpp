#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
bool visited[N];
vector<int>graph[N];

void dfs(int vertex){
    //Take action on vertex after entering the vertex
    cout<<vertex<<endl;

    visited[vertex] = true;
    for(auto child : graph[vertex]){
        // cout<<"par "<<vertex<<", child "<<child<<endl;
        if(visited[child]) continue;
        //Take action on child before entering the child node
        dfs(child);
        //take action on child after exiting the child node
    }
    //take action on vertex before leaving the vertex
}
//t.c = O(vertex + edges) = O(n+m);


int main(){
    int n, m;
    cin>>n>>m; //n = node and m = edge
    for (int i = 0; i < m; i++)
    {
        int v1, v2; cin>>v1>>v2;
        //list method
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
}