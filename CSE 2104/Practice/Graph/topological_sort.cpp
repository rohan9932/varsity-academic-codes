#include<bits/stdc++.h>
using namespace std;

bool hasCycle(int node, vector<vector<int>>& adjList, vector<int>& state, stack<int>& s) {
    state[node] = 1;
    
    for(int child: adjList[node]) {
        if(state[child] == 1) {
            return true;
        } else {
            if(hasCycle(child, adjList, state, s)) {
                return true;
            }
        }
    }

    state[node] = 2;
    s.push(node);
    return false;
}

int main() {
    int vertex, edges;
    cin >> vertex, edges;

    vector<vector<int>>adjList(vertex);

    for(int i = 0; i < vertex; i++) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        adjList[nodeA].push_back(nodeB);
    }

    vector<int> state(vertex, 0);

    bool possible = true;
    stack<int>s;

    for(int i = 0; i < vertex; i++) {
        if(state[i] == 0) {
            if(hasCycle(i, adjList, state, s)) {
                possible = false;
                break;
            }
        }
    }

    if(!possible) {
        cout << "Not possible!!";
    } else {
        while(!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }

    return 0;
}