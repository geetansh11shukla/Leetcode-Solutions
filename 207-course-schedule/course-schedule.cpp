class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto & p:prerequisites)
        {
            adj[p[1]].push_back(p[0]);
        }
        vector<int> state(numCourses,0);

        function<bool(int)> dfs=[&](int u)
        {
            if(state[u]==1)
            {
                return false;
            }
            if(state[u]==2)
            {
                return true;
            }
            state[u]=1;
            for(int v: adj[u])
            {
            if(!dfs(v))
            {
                return false;
            }
            }
            state[u]=2;
            return true;
        };

        for(int i=0;i<=numCourses-1;i++)
        {
            if(!dfs(i))
            {
                return false;
            }
        }
        return true;
    }
};