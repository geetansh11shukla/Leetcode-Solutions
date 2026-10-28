class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        vector<bool> vis(m, false);
        int count = 0;

        for(int i=0;i<=m-1;i++)
        {
                if(!vis[i])
                {
                    count++;
                    
                    queue<int> q;
                    q.push(i);
                    vis[i]=true;
                    while(!q.empty())
                    {
                        int node=q.front();
                        q.pop();

                        for(int j=0;j<=m-1;j++)
                        {
                            if(!vis[j] && isConnected[node][j]==1)
                            {
                                vis[j]=true;
                                q.push(j);
                            }
                        }
                    }
                }
            }
        return count;
    }
};