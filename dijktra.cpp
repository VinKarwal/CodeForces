#include <bits/stdc++.h>
using namespace std;

void djkistrs(int node, vector<vector<pair<int, int>>>& adj, vector<int>& dist) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[node] = 0;
    pq.push({ 0, node });
    while (!pq.empty()) {
        int curr_dist = pq.top().first;
        int curr_node = pq.top().second;
        pq.pop();

        if (curr_dist > dist[curr_node]) continue;

        for (auto& neighbor : adj[curr_node]) {
            int next_node = neighbor.first;
            int weight = neighbor.second;

            if (dist[curr_node] + weight < dist[next_node]) {
                dist[next_node] = dist[curr_node] + weight;
                pq.push({ dist[next_node], next_node });
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({ v, w });
        adj[v].push_back({ u, w }); // For undirected graph
    }

    vector<int> dist(n, INT_MAX);
    int start_node = 0; // Starting from node 0
    djkistrs(start_node, adj, dist);

    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX) {
            cout << "Distance from node " << start_node << " to node " << i << " is: INF" << endl;
        }
        else {
            cout << "Distance from node " << start_node << " to node " << i << " is: " << dist[i] << endl;
        }
    }

    return 0;
}