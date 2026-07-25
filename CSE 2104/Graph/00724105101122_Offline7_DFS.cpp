#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& adj, int stNode) {
    vector<bool>visited(adj.size(), false);
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
    dfs(adj, 0);
    cout << "\n";
    return 0;
}