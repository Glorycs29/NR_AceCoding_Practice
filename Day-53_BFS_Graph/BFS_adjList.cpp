#include<bits/stdc++.h>
using namespace std;

void bfs(int src, vector<int> adj[], bool visited[]){
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        if(visited[cur]==true) continue;
        cout<<cur<<" ";
        visited[cur] = true;

        for(int nbr: adj[cur]){
            if(!visited[nbr]){
                q.push(nbr);
            }
        }
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
    // queue<int> q;
    memset(visited, false, sizeof(visited));
    bfs(4, adj, visited);
    return 0;
}
