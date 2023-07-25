#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> adjMatrix, bool visited[]){
    if(visited[node])return;
    cout<<node<<" , ";
    visited[node] =true;
    for(int nbr=0; nbr < adjMatrix[node].size(); nbr++){
        dfs(nbr, adjMatrix, visited);
    }

}

int main(){
    cout<<"Enter the number of nodes and edges in your graph\n";
    int n,e; cin>>n>>e;
    vector<vector<int>> adjMatrix(n, vector<int>(n,0));

    cout<<"Enter the edges of your graph\n";
    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }
    cout<<"Your Graph DFS is:\n";
    bool visited[n];
    memset(visited, false, sizeof(visited));
    dfs(4, adjMatrix, visited);
    return 0;
}