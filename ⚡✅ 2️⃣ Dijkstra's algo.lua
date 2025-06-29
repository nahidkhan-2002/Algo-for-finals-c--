Dijkstra(Graph, source):

1.  for each vertex v in Graph:
2.      dist[v] ← ∞
3.      visited[v] ← false

4.  dist[source] ← 0

5.  PriorityQueue PQ ← empty
6.  PQ.insert( (0, source) )     // (distance, node)

7.  while PQ is not empty:
8.      (currentDist, u) ← PQ.extractMin()

9.      if visited[u] = true:
10.         continue

11.     visited[u] ← true

12.     for each neighbor v of u:
13.         weight ← edge_weight(u, v)

14.         if dist[u] + weight < dist[v]:
15.             dist[v] ← dist[u] + weight
16.             PQ.insert( (dist[v], v) )

17. return dist
