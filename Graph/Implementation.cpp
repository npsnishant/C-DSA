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
};

int main(){
    Graph<int> g1;
    Graph<string> g2;

    // g1.add_edge(1,4);
    // g1.add_edge(1,2);
    // g1.add_edge(2,4);
    // g1.add_edge(3,5);
    // g1.add_edge(6,1);
    // g1.add_edge(1,3);
    // g1.print();

    g2.add_edge("dl", "rr");
    g2.add_edge("kkr", "csk");
    g2.add_edge("dl", "rcb");
    g2.add_edge("rcb", "mi");
    g2.add_edge("rcb", "csk");
    g2.add_edge("srh", "kxp");
    g2.add_edge("rr", "kkr");
    g2.print();


    return 0;
}