//
// Created by Akshansh Gusain on 23/08/21.
//
#include<stdc++.h>
#include "Graph.cpp"

using namespace std;

/// Topological Sort 1. DFS  2. BFS (Kahn's Algorithm)
//
///  DFS
//Time: O(E + V), Space: O(V)

void findTopoSort(int i, vector<int> &used, stack<int> &st, Graph &g) {
    used[i] = 1;
    for (auto it : g.adj[i]) {
        if (!used[it]) {
            findTopoSort(it, used, st, g);
        }
    }
    st.push(i);
}

vector<int> topoSort(Graph &g) {
    stack<int> st;
    vector<int> used(g.V,0);
    for (int i = 0; i < g.V; i++) {
        if (!used[i]) {
            findTopoSort(i, used, st, g);
        }
    }

    vector<int> topo;
    while (!st.empty()) {
        topo.push_back(st.top());
        st.pop();
    }

    return topo;
}

/// BFS  -  Kahn's Algorithm
// Time: O(), Space: O()
vector<int> topoSortBFS(Graph &graph){
    vector<int> topo;
    vector<int> inDegree(graph.V,0);
    queue<int> q;

    for(int i = 0; i < graph.V; i++){
        for(auto it: graph.adj[i]){
            inDegree[it]++;
        }
    }

    for(int i = 0; i < graph.V; i++){
        if(inDegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int currentVertex = q.front();
        q.pop();
        topo.push_back(currentVertex);
        for(auto it: graph.adj[currentVertex]){
            inDegree[it]--;
            if(inDegree[it] == 0){
                q.push(it);
            }
        }

    }
    return topo;
}


int main() {
    Graph graph(6);
    graph.addEdge(5, 2);
    graph.addEdge(5, 0);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);

    vector<int> sorted = topoSort(graph);
    cout<<"Topological Sort, DFS: "<<endl;
    for (auto it: sorted) {
        cout << it << " ";
    }
    cout<<endl;

    cout<<"Topological Sort, BFS: "<<endl;
    vector<int> sorted2 = topoSortBFS(graph);
    for (auto it: sorted2) {
        cout << it << " ";
    }


    return 0;
}