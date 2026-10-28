class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0,ans=0;

        vector<vector<int>> dir={
            {1,0},{-1,0},{0,-1},{0,1}
        };
        queue<pair<int,int>> q;
        for(int i=0;i<=m-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
                    while(!q.empty() && count>0)
                    {
                        int size=q.size();
                        ans++;
                        while(size--)
                        {
                        auto [x,y]=q.front();
                        q.pop();
                    for(auto d:dir)
                    {
                        int nx=x+d[0];
                        int ny=y+d[1];

                        if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==1)
                        {
                            count--;
                            grid[nx][ny]=2;
                            q.push({nx,ny});
                        }
                    }
                        }
                    }
        return count==0 ? ans:-1;
   }
};