#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;


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
            for(int node : adj[i]){
                cout<<node<<", ";
            }
            cout<<endl;
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
    g1.print();


    return 0;
}