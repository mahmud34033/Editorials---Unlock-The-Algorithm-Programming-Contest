// Breadth First Search (BFS) - ChatGPT

#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> bfs(vector<vector<int>>& graph, int start, int destination) {
    vector<int> parent(graph.size(), -1);
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == destination) {
            vector<int> path;
            while (current != -1) {
                path.push_back(current);
                current = parent[current];
            }
            reverse(path.begin(), path.end());
            return path;
        }

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
                parent[neighbor] = current;
            }
        }
    }

    return vector<int>(); // No path found
}

int main() {
    int N, S, D, M;
    cin >> N >> S >> D >> M;

    vector<vector<int>> graph(N + 1);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    vector<int> path = bfs(graph, S, D);

    if (path.empty()) {
        cout << "-1" << endl;
    } else {
        cout << path.size() << endl;
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
