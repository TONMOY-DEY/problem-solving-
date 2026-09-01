#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(const vector<vector<int>>& graph, int V) {

    vector<bool> visited(V, false);
    int componentCount = 0;

    for (int i = 0; i < V; i++) {

        if (!visited[i]) {

            componentCount++;

            cout << "Component " << componentCount << ": ";

            queue<int> q;

            q.push(i);
            visited[i] = true;

            while (!q.empty()) {

                int u = q.front();
                q.pop();

                cout << u << " ";

                for (int v = 0; v < V; v++) {

                    if (graph[u][v] == 1 && !visited[v]) {

                        visited[v] = true;
                        q.push(v);
                    }
                }
            }

            cout << endl;
        }
    }

    cout << "Total Number of Connected Components: "
         << componentCount << endl;
}

int main() {

    int V = 5;

    vector<vector<int>> graph = {
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };

    BFS(graph, V);

    return 0;
}