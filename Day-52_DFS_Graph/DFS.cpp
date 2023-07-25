#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], bool visited[]){
    if(visited[node])return;
    cout<<node<<" , ";
    visited[node] =true;
    for(int nbr : adj[node]){
        dfs(nbr, adj, visited);
    }

}

int main(){
    cout<<"Enter the number of nodes and edges in your graph\n";
    int n,e; cin>>n>>e;
    vector<int> adj[n];

    cout<<"Enter the edges of your graph\n";
    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Your Graph DFS is:\n";
    bool visited[n];
    memset(visited, false, sizeof(visited));
    dfs(4, adj, visited);
    return 0;
}