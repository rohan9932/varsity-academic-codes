#include<bits/stdc++.h>
using namespace std;

vector<int>v[11];

int main() {
    int n,e;
    cin >> n >> e;
    for(int i = 0; i < e; i++) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        v[nodeA].push_back(nodeB);
    }

    //print
    for(int i = 1; i <= n; i++) {
        cout << i << "-> ";
        for(int j = 0; j<v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
