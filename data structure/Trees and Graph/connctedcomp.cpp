//connected components in a forest and print the component nodes
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>graph[N];
bool visited[N];
vector<vector<int>> cc;
vector<int>current_cc;

void dfs(int vertex){

    visited[vertex] = true;
    current_cc.push_back(vertex);
    for(auto child : graph[vertex]){
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    int n, e;
    cin>>n>>e;
    for (int i = 0; i < e; i++)
    {
        int x, y; 
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        ct++;
    }

    cout<<cc.size()<<endl;
    for(auto cc_c : cc){
        for(auto node : cc_c){
            cout<<node<<" ";
        }
        cout<<"\n";
    }
}