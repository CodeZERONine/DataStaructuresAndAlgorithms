//
// Created by Akshansh Gusain on 10/03/21.
//
#include<stdc++.h>

using namespace std;

static int findParent(vector<int> &parent, int node) {
    if (node == parent[node]) {
        return node;
    }

    return parent[node] = findParent(parent, parent[node]);
}

static bool unionn(vector<int> &parent, vector<int> &rank, int u, int v) {

    u = findParent(parent, u);
    v = findParent(parent, v);


    if (u == v) {
        return false;
    }

    if (rank[u] < rank[v]) {
        parent[u] = v;
    } else if (rank[u] > rank[v]) {
        parent[v] = u;
    } else {
        parent[v] = u;
        rank[u]++;
    }
    return true;

}

int removeStones(vector<vector<int>> &stones) {
    int N = stones.size();

    // parent
    vector<int> parent(N);
    for (int i = 0; i < N; i++) {
        parent[i] = i;
    }

    // rank
    vector<int> rank(N + 1, 0);


//    // make union
//    for (int i = 0; i < N; i++) {
//        if (findParent(parent, stones[i][0]) != findParent(parent, stones[i][1])) {
//            //make union
//            unionn(parent, rank, stones[i][0], stones[i][1]);
//        }
//    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) {
                if (unionn(parent, rank, i,j)) {
                    count++;
                }
            }
        }
    }


    return count;
}


int main() {
    vector<vector<int>> v = {{0, 0},
                             {0, 1},
                             {1, 0},
                             {1, 2},
                             {2, 1},
                             {2, 2}};
    cout << removeStones(v); // 5

    return 0;
}