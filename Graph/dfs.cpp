#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;

class Graph{
public:
	int V;
	list<int> *adj;
	Graph(int v){
        V = v;
        adj = new list<int>[V];
    }

    void add_edge(int u, int v, bool bidir = true){
    	adj[u].push_back(v);
    	if(bidir){
    		adj[v].push_back(u);
    	}
    }
    
    
    
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(int node : adj[i]){
                cout<<node<<", ";
            }
            cout<<endl;
        }
    }

        bool *visited = new bool[V]{false};

    void dfs(int u){
    	cout<<u<<" ";
    	visited[u] = true;
    	for(auto neigh : adj[u]){
    		if(!visited[neigh]){
    			dfs(neigh);
    		}
    	}
    }
};


int main(){
	Graph g1(6);
    g1.add_edge(0,1);
    g1.add_edge(0,2);
    g1.add_edge(0,3);
    g1.add_edge(1,3);
    g1.add_edge(1,2);
    g1.add_edge(2,3);
    // g1.print();

    // g1.print();

    g1.dfs(0);
}