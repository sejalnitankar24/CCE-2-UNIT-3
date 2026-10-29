**1.Title:**

Develop a water distribution network using an adjacency list and apply BFS to identify all distribution points reachable from the main water tank.



**2. Problem Statement:**

A water distribution system supplies water from a main water tank to different distribution points through connected pipes. We need to represent this system using a graph and an adjacency list. By applying Breadth-First Search (BFS), we can identify all distribution points that are reachable from the main water tank.



**3. Objective:**

* To represent a water distribution network using a graph.
* To store pipe connections using an adjacency list.
* To implement BFS using a queue.
* To find all reachable distribution points from the main water tank.
* To understand the practical application of graphs in water supply systems.



**4.Introduction:**

A water distribution network is a system that carries water from a main water tank to different areas through pipes.

we represent the water distribution network using a graph. The distribution points are represented as vertices, and the connecting pipes are represented as edges.

An adjacency list stores the connections of each distribution point. Breadth-First Search (BFS) is a graph traversal algorithm that visits connected points level by level using a queue.

Using BFS, we can identify which distribution points are reachable from the main water tank.



**5.Algorithm:**

1. Start the program.
2. Create an adjacency list to store the water pipe connections.
3. Enter the number of pipe connections.
4. Add each connection to the adjacency list.
5. Select vertex 0 as the main water tank.
6. Mark the main tank as visited and insert it into the queue.
7. Remove a vertex from the queue and display it.
8. Visit all its unvisited neighboring vertices and insert them into the queue.
9. Repeat until the queue becomes empty.
10. Stop the program.



**6.sample input:**

Suppose,

Main Tank (0) is connected to Point A (1) and Point B (2).

Point A (1) is connected to Point C (3).

Point B (2) is connected to Point D (4).

Point D (4) is connected to Point E (5).

Enter this input:5

0 1

0 2

1 3

2 4

4 5

Here, 5 represents the number of pipe connections.



**7.Output:**

Water Distribution Network

0 = Main Tank, 1 to 5 = Points A to E

Enter number of pipe connections: 5

Enter connections (two vertex numbers):

0 1

0 2

1 3

2 4

4 5



Reachable distribution points:

Main Water Tank Point A Point B Point C Point D Point E



**8.Result:**

All connected distribution points (A, B, C, D, and E) were successfully visited from the main water tank.



**9.Conclusion:**

&#x20;we developed a water distribution network using an adjacency list in C++. We applied Breadth-First Search (BFS) to identify all distribution points reachable from the main water tank. It helped understand graph representation, queues, and graph traversal. It also demonstrated a practical application of data structures in water distribution systems.

