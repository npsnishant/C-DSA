#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;


template <typename T>
class Graph{
public:
    unordered_map<T, list<T> > adj;
    Graph(){

    }

    void add_edge(T n1, T n2, bool bidir = true){
        adj[n1].push_back(n2);
        if(bidir){
            adj[n2].push_back(n1);
        }
    }

    void print(){
        for(auto row : this->adj){
            cout<<row.first<<"-->";
            for(auto el : row.second){
                cout<<el<<", ";
            }
            cout<<endl;
        }
    }

    void dfs_helper(int src, map<T, bool> &visited){
        cout<<src<<" ";
        visited[src] = true;
        for(auto neigh : adj[src]){
            if(!visited[neigh]){
                dfs_helper(neigh, visited);
            }
        }
    }


    void dfs(int src){
        map<T, bool> visited;
        dfs_helper(src, visited);
    }

};

int main(){
    Graph<int> g1;
    g1.add_edge(0,1);
    g1.add_edge(1,2);
    g1.add_edge(2,3);
    g1.add_edge(3,4);
    g1.add_edge(4,5);
    g1.add_edge(3,0);

    g1.dfs(0);


    return 0;
}