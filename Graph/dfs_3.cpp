#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;

vector<int> adj[1000005];
bool visited[1000005];


void dfs(int src){
    cout<<src<<" ";
    visited[src] = true;
    for(auto neigh : adj[src]){
        if(!visited[neigh]){
            dfs(neigh);
        }
    }
}


int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0;i<nodes;i++){
        visited[i+1] = false;
    }

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int startNode;
    cin>>startNode;
    dfs(startNode);

    return 0;
}