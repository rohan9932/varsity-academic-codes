#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adjList, vector<bool>& isVisited) {
    cout << node << " ";
    isVisited[node] = true;

    for(int child: adjList[node]) {
        if(!isVisited[child]) {
            dfs(child, adjList, isVisited);
        }
    }
}

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<int>>adjList(vertex);

    for(int i = 0; i < edge; i++) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        adjList[nodeA].push_back(nodeB);
    }

    vector<bool> isVisited(vertex, false);

    for(int i =0; i < vertex; i++) {
        if(!isVisited[i]) {
            dfs(i, adjList, isVisited);
        }
    }

    return 0;
}