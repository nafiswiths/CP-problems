#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> P;

int main()
{
    int V, E;
    cin >> V >> E;

    vector<P> graph[100005];

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    int S, D;
    cin >> S >> D;

    int dist[100005];

    for (int i = 1; i <= V; i++)
        dist[i] = 1000000000;

    priority_queue<P, vector<P>, greater<P>> pq;

    dist[S] = 0;
    pq.push({0, S});

    while (!pq.empty())
    {
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (cost > dist[u])
            continue;

        for (int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i].first;
            int w = graph[u][i].second;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    if (dist[D] == 1000000000)
        cout << -1;
    else
        cout << dist[D];

    return 0;
}