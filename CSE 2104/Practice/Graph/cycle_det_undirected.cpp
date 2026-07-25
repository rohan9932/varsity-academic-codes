#include<bits/stdc++.h>
using namespace std;

bool hasCycle(int node, vector<vector<int>>& adjList, vector<bool>& isVisited) {
    queue<pair<int, int>> q;
    q.push({node, -1});

    while(!q.empty()) {
        pair<int, int> p = q.front();
        int node = p.first;
        int parent = p.second;

        for(int child: adjList[node]) {
            if(isVisited[child] && child != parent) {
                return true;
            } else if(!isVisited[child]) {
                isVisited[child] = true;
                q.push({child, node});
            }
        }
    }

    return false;
}


int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int>>adjList(vertex);

    for(int i = 0; i < edges; i++) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        adjList[nodeA].push_back(nodeB);
    }

    vector<bool> isVisited(vertex, false);

    bool cycle = false;

    cout << hasCycle(vertex, adjList, isVisited) << "\n";

    return 0;
}