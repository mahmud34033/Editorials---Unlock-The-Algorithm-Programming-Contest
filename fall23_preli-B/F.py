# Breadth First Search (BFS) - ChatGPT

from collections import deque

def bfs(graph, start, destination):
    parent = [-1] * len(graph)
    visited = [False] * len(graph)
    queue = deque()

    queue.append(start)
    visited[start] = True

    while queue:
        current = queue.popleft()

        if current == destination:
            path = []
            while current != -1:
                path.append(current)
                current = parent[current]
            return path[::-1]

        for neighbor in graph[current]:
            if not visited[neighbor]:
                queue.append(neighbor)
                visited[neighbor] = True
                parent[neighbor] = current

    return []

def main():
    N, S, D = map(int, input().split())
    M = int(input())

    graph = [[] for _ in range(N + 1)]

    for _ in range(M):
        u, v = map(int, input().split())
        graph[u].append(v)

    path = bfs(graph, S, D)

    if not path:
        print("-1")
    else:
        print(len(path))
        print(*path)

if __name__ == "__main__":
    main()
