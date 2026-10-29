#include <iostream>
#include <queue>
using namespace std;

const int N = 6;

// Node for adjacency list
struct Node
{
    int vertex;
    Node* next;
};

Node* adj[N] = {NULL};

// Function to add an edge
void addEdge(int u, int v)
{
    Node* newNode = new Node;
    newNode->vertex = v;
    newNode->next = adj[u];
    adj[u] = newNode;

    newNode = new Node;
    newNode->vertex = u;
    newNode->next = adj[v];
    adj[v] = newNode;
}

// BFS traversal
void BFS(int start)
{
    bool visited[N] = {false};
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "\nReachable distribution points:\n";

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        if (current == 0)
            cout << "Main Water Tank ";
        else
            cout << "Point " << char('A' + current - 1) << " ";

        Node* temp = adj[current];

        while (temp != NULL)
        {
            int neighbor = temp->vertex;

            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }

            temp = temp->next;
        }
    }

    cout << endl;
}

int main()
{
    int edges, u, v;

    cout << "Water Distribution Network\n";
    cout << "0 = Main Tank, 1 to 5 = Points A to E\n";

    cout << "Enter number of pipe connections: ";
    cin >> edges;

    cout << "Enter connections (two vertex numbers):\n";

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;

        if (u >= 0 && u < N && v >= 0 && v < N && u != v)
        {
            addEdge(u, v);
        }
        else
        {
            cout << "Invalid connection. Try again.\n";
            i--;
        }
    }

    BFS(0);

    return 0;
}
