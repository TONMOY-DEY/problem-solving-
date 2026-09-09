#include <iostream>
#include <climits>
using namespace std;

#define V 6

int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX;
    int minIndex = -1;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void printMST(int parent[], int graph[V][V])
{
    int totalCost = 0;

    cout << "Edge \tWeight\n";

    for (int i = 1; i < V; i++)
    {
        cout << char(parent[i] + 'A')
             << " - "
             << char(i + 'A')
             << "\t"
             << graph[i][parent[i]]
             << endl;

        totalCost += graph[i][parent[i]];
    }

    cout << "\nTotal Cost of MST = " << totalCost << endl;
}

void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] &&
                mstSet[v] == false &&
                graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    printMST(parent, graph);
}

int main()
{
    int graph[V][V] =
    {
        {0, 7, 8, 0, 0, 0},
        {7, 0, 3, 6, 0, 0},
        {8, 3, 0, 4, 3, 0},
        {0, 6, 4, 0, 2, 5},
        {0, 0, 3, 2, 0, 2},
        {0, 0, 0, 5, 2, 0}
    };

    primMST(graph);

    return 0;
}