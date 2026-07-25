#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& adj, int stNode) {
    vector<bool>visited(adj.size(), false);
    queue<int> q;
    q.push(stNode);

    while(!q.empty()) {
        int front = q.front();
        q.pop();

        if(!visited[front]) {
            cout << front << " ";
            visited[front] = true;

            for(int neighbour: adj[front]) {
                if(!visited[neighbour]) {
                    q.push(neighbour);
                }
            }
        }
    }
}

int main() {
    vector<vector<int>> adj = {{3, 2, 1}, {0, 3}, {0,3}, {0, 1, 2, 4}, {3}};
    bfs(adj, 0);
    cout << "\n";
    return 0;
}