#include<bits/stdc++.h>
using namespace std;

void bfs(int node, vector<vector<int>>& adjList, vector<bool>& isVisited) {
    int firstNode = node;
    queue<int> q;
    q.push(firstNode);

    while(!q.empty()) {
        int frontNode = q.front();
        q.pop();

        if(!isVisited[frontNode]) {
            cout << frontNode << " ";
            isVisited[frontNode] = true;

            for(int child: adjList[frontNode]) {
                if(!isVisited[child]) {
                    q.push(child);
                }
            }
        }
    }
}

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<int>> adjList(vertex);

    for(int i = 0; i < edge; i++) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB; //node input
        adjList[nodeA].push_back(nodeB);
    }

    vector<bool> isVisited(vertex, false);

    for(int i = 0; i < vertex; i++) {
        if(!isVisited[i]) {
            bfs(i, adjList, isVisited);
        }
    }

    return 0;
}