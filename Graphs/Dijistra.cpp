    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        vector<int>ans(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        pq.push({0, S});
        ans[S] = 0;
        while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto nbr : adj[u]) {
        if (ans[nbr[0]] > ans[u] + nbr[1]) {
        ans[nbr[0]] = ans[u] + nbr[1];
        pq.push({ans[nbr[0]], nbr[0]});
        }
        }
        }
        return ans;
    }