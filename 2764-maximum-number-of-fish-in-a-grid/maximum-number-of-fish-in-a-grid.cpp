class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int total_ans=0,ans=0;

        vector<vector<int>> dir=
        {
            {1,0},{-1,0},{0,-1},{0,1}
        };

        for(int i=0;i<=m-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                if(grid[i][j]>0)
                {
                    ans=0;
                    ans+=grid[i][j];

                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j]=0;

                    while(!q.empty())
                    {
                        auto [x,y]=q.front();
                        q.pop();
                    for(auto d:dir)
                    {
                        int nx=x+d[0];
                        int ny=y+d[1];

                        if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]>0)
                        {
                            ans+=grid[nx][ny];
                            q.push({nx,ny});
                            grid[nx][ny]=0;
                        }
                    }
                    total_ans=max(total_ans,ans);
                }
                }
            }
        }
        return total_ans;
    }
};