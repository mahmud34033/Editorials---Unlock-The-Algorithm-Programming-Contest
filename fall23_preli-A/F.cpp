// Breadth First Search (BFS) - ChatGPT

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> find_path(int N, int S, int D, vector<vector<int>>& grid) {
    vector<bool> visited(N, false);
    vector<int> parent(N, -1);
    queue<int> q;

    q.push(S);
    visited[S - 1] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == D) {
            vector<int> path;
            while (current != -1) {
                path.push_back(current);
                current = parent[current - 1];
            }
            reverse(path.begin(), path.end());
            return path;
        }

        for (int i = 0; i < N; ++i) {
            if (grid[current - 1][i] == 1 && !visited[i]) {
                q.push(i + 1);
                visited[i] = true;
                parent[i] = current;
            }
        }
    }

    return vector<int>();
}

int main() {
    int N, S, D;
    cin >> N >> S >> D;

    vector<vector<int>> grid(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    vector<int> path = find_path(N, S, D, grid);

    if (path.empty()) {
        cout << "-1" << endl;
    } else {
        cout << path.size() << endl;
        for (int i = 0; i < path.size(); ++i) {
            cout << path[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
