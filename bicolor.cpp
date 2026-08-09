#include<bits/stdc++.h>
using namespace std;

const int MX = 1e5+5;

vector<int> adj[MX];
int color[MX]; 

bool Bfs(int source)
{
    queue<int> q;
    color[source] = 0;
    q.push(source);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int i = 0; i < adj[node].size(); i++) {
            int nxt_node = adj[node][i];

            if (color[nxt_node] == -1) {
                color[nxt_node] = 1 - color[node];
                q.push(nxt_node);
            }
            else if (color[nxt_node] == color[node]) {
                return false; // Not bipartite
            }
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    memset(color, -1, sizeof(color));

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool ok = true;

    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            if (!Bfs(i)) {
                ok = false;
                break;
            }
        }
    }

    if (ok)
        cout << "BICOLORABLE.\n";
    else
        cout << "NOT BICOLORABLE.\n";
}