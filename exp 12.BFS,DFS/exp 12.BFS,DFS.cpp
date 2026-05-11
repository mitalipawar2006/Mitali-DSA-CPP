#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) : V(V), adj(V) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }

    void BFS(int s) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[s] = true;
        q.push(s);

        cout << "BFS starting from node " << s << ": ";
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " ";

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void DFS(int s) {
        vector<bool> visited(V, false);
        stack<int> st;

        st.push(s);

        cout << "DFS starting from node " << s << ": ";
        while (!st.empty()) {
            int u = st.top();
            st.pop();

            if (!visited[u]) {
                visited[u] = true;
                cout << u << " ";
            }

            for (auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {
                if (!visited[*it]) {
                    st.push(*it);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int V, E, u, v, startNode;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    Graph g(V);
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        cin >> u >> v;
        g.addEdge(u, v);
    }

    cout << "Enter starting node for traversals: ";
    cin >> startNode;

    g.BFS(startNode);
    g.DFS(startNode);

    return 0;
}
