#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
// int graph[N][N];
bool visited[N];
vector<pair<int, int>>graph2[N];


int main(){
    
    int n, m;
    cin>>n>>m; //n = node and m = edge
    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt; cin>>v1>>v2>>wt;
        //matrix method;
        // graph[v1][v2] = wt;
        // graph[v2][v2] = wt;

        //list method
        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
    }
    
    //adjacency matrix
    //space complexity = O(n^2);
    // in case of 10^5 or higher the matrix method cant be used as the s.c may exceed;
    //N != 10^5 || N<= 10^5

    //adjacency list
    //space complexity = O(N + M);
    //in worst the M maybe more than 10^8 but that will not be asked;
    //N = 10^5, M < 10^7
}