class Solution {
public:
    vector<long long> disjikstras(
        int src,
        int n,
        vector<vector<pair<int, int>>>& adj
    ) {
        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>
        > pq;

        vector<long long> dist(n, LLONG_MAX);

        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto val = pq.top();
            pq.pop();

            long long d = val.first;
            int node = val.second;

            if (d > dist[node]) continue;

            for (auto [next, weight] : adj[node]) {
                if (dist[next] > d + weight) {
                    dist[next] = d + weight;
                    pq.push({dist[next], next});
                }
            }
        }

        return dist;
    }

    vector<bool> findAnswer(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<long long> dist0 = disjikstras(0, n, adj);
        vector<long long> distN = disjikstras(n - 1, n, adj);

        vector<bool> ans(edges.size(), false);
        long long shortest = dist0[n - 1];

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];

            if (dist0[u] != LLONG_MAX &&
                distN[v] != LLONG_MAX &&
                dist0[u] + w + distN[v] == shortest) {
                ans[i] = true;
            }

            if (dist0[v] != LLONG_MAX &&
                distN[u] != LLONG_MAX &&
                dist0[v] + w + distN[u] == shortest) {
                ans[i] = true;
            }
        }

        return ans;
    }
};