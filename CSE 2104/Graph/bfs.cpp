#include<bits/stdc++.h>
using namespace std;

vector<int> visited(5, false);

void bfs(vector<vector<int>>& adj, int stNode) {
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

void dfs(vector<vector<int>>& adj, int node) {
    cout << node << " ";
    visited[node] = true;
    for(int neighbour: adj[node]) {
        if(!visited[neighbour]) {
            dfs(adj, neighbour);
        }
    }
}

void dfsiterative(vector<vector<int>>& adj, int stNode) {
    stack<int> s;
    s.push(stNode);

    while(!s.empty()) {
        int top = s.top();
        s.pop();

        if(!visited[top]) {
            cout << top << " ";
            visited[top] = true;

            for(int neighbour: adj[top]) {
                if(!visited[neighbour]) {
                    s.push(neighbour);
                }
            }
        }
    }
}

int main() {
    vector<vector<int>> adj = {{3, 2, 1}, {0, 3}, {0,3}, {0, 1, 2, 4}, {3}};
    dfsiterative(adj, 0);
    return 0;
}