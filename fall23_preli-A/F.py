# Breadth First Search (BFS) - ChatGPT

from collections import deque

def find_path(N, S, D, grid):
    visited = [False] * N
    queue = deque()
    parent = [-1] * N

    queue.append(S)
    visited[S - 1] = True

    while queue:
        current = queue.popleft()

        if current == D:
            path = []
            while current != -1:
                path.append(current)
                current = parent[current - 1]
            path.reverse()
            return path

        for i in range(N):
            if grid[current - 1][i] == 1 and not visited[i]:
                queue.append(i + 1)
                visited[i] = True
                parent[i] = current

    return []

# Sample input parsing
N, S, D = map(int, input().split())
grid = []
for _ in range(N):
    row = list(map(int, input().split()))
    grid.append(row)

# Finding the path
path = find_path(N, S, D, grid)

# Output
if not path:
    print("-1")
else:
    print(len(path))
    print(*path)
