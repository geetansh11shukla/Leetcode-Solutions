class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        vector<vector<pair<int,int>>> adj(n + 1);

        for (auto &it : times) {
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dist(n+1,INT_MAX);

        dist[k]=0;
        pq.push({0, k});

        while(!pq.empty())
        {
            auto [d,node]=pq.top();
            pq.pop();

            if(d > dist[node])
            continue;

            for(auto it:adj[node])
            {
                int v=it.first;
                int wt=it.second;

                if(d+wt<dist[v])
                {
                    dist[v]=d+wt;
                    pq.push({dist[v],v});
                }
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (dist[i] == INT_MAX)
                return -1;
            ans = max(ans, dist[i]);
        }

        return ans;
    }
};