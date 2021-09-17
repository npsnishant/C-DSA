#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;


// class Graph{
// public:
//     int V;
//     //array of linked list of size v;
//     list <int> *adj;

//     Graph(int v){
//         V = v;
//         adj = new list<int>[V];
//     }

//     void add_edge(int n1, int n2, bool bidir=true){
//         adj[n1].push_back(n2);
//         if(bidir){
//             adj[n2].push_back(n1);
//         }
//     }

//     void print(){
//         for(int i=0;i<V;i++){
//             cout<<i<<"-->";
//             for(int node : adj[V]){
//                 cout<<node<<", ";
//             }
//             cout<<endl;
//         }
//     }

//     void bfs(int src){
//         queue<int> q;
//         bool *visited = new bool[V]{0};
//         int *dist = new int[V+1]{0};
//         int *parent = new int[V+1]{0};

//         for(int i=0;i<V;i++){
//             parent[i] = -1;
//         }
 
//         q.push(src);
//         visited[src] = true;
//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             cout<<node<<" ";
//             for(auto neigh : adj[node]){
//                 if(!visited[neigh]){
//                     q.push(neigh);
//                     visited[neigh] = true;
//                     dist[neigh] = dist[node] + 1;
//                     parent[neigh] = node;
//                 }
//             }
//         }
//         cout<<endl;

//         //print the distance of every node from the source

//         for(int i=0;i<V;i++){
//             cout<<i<<" : "<<dist[i]<<endl;
//         }

//     }
// };



// in this we pass one more argument(dest) in bfs function to fing the shortest path of the graph


class Graph{
public:
    int V;
    //array of linked list of size v;
    list <int> *adj;

    Graph(int v){
        V = v;
        adj = new list<int>[V];
    }

    void add_edge(int n1, int n2, bool bidir=true){
        adj[n1].push_back(n2);
        if(bidir){
            adj[n2].push_back(n1);
        }
    }

    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(int node : adj[V]){
                cout<<node<<", ";
            }
            cout<<endl;
        }
    }

    void bfs(int src, int dest){
        queue<int> q;
        bool *visited = new bool[V]{0};
        int *dist = new int[V+1]{0};
        int *parent = new int[V+1]{0};

        for(int i=0;i<V;i++){
            parent[i] = -1;
        }
 
        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";
            for(auto neigh : adj[node]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh] = true;
                    dist[neigh] = dist[node] + 1;
                    parent[neigh] = node;
                }
            }
        }
        cout<<endl;

        //print the distance of every node from the source

        for(int i=0;i<V;i++){
            // cout<<i<<" : "<<dist[i]<<endl;
        }

        cout<<"shortest distance is "<<dist[dest]<<endl;
        cout<<"shortest path is ";

        int temp = dest;
        while(temp!=-1){
            cout<<temp<<"<--";
            temp = parent[temp];
        }
    }
};


int main(){
    Graph g1(6);
    g1.add_edge(0,1);
    g1.add_edge(1,2);
    g1.add_edge(0,4);
    g1.add_edge(2,4);
    g1.add_edge(3,2);
    g1.add_edge(2,3);
    g1.add_edge(3,5);
    g1.add_edge(3,4);
    // g1.print();

    g1.bfs(0,5);


    return 0;
}