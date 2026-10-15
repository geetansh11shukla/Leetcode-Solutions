class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        queue<int> q;
        vector<bool> vis(V,false);
        vector<int> color(V,-1);

        for(int i = 0; i < V; i++) {
        if(!vis[i]) {
        q.push(i);
        vis[i]=true;
        color[i]=0;

        while(q.size()>0)
        {
            int curr=q.front();
            q.pop();
            // list<int> neighbours=graph[curr];

            for(int v:graph[curr])
            {
                if(!vis[v])
                {
                    vis[v]=true;
                    color[v]=!color[curr];
                    q.push(v);
                }
                else
                {
                    if(color[v]==color[curr])
                    {
                        return false;
                    }
                }
            }
        }
        }
        }
        return true;
    }
};