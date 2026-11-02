class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;

        vector<vector<int>> dir=
        {
            {1,0},{-1,0},{0,1},{0,-1}
        };
        queue<pair<int,int>> q;
        for(int i=0;i<=m-1;i++)
        {
            if(grid[i][0]==1)
            {
                grid[i][0]=0;
                q.push({i,0});
            }
            if(grid[i][n-1]==1)
            {
                grid[i][n-1]=0;
                q.push({i,n-1});
            }
        }

        for(int i=0;i<=n-1;i++)
        {
            if(grid[0][i]==1)
            {
                grid[0][i]=0;
                q.push({0,i});
            }
            if(grid[m-1][i]==1)
            {
                grid[m-1][i]=0;
                q.push({m-1,i});
            }
        }
            
                    while(!q.empty())
                    {
                        auto [x,y]=q.front();
                        q.pop();

                        for(auto d:dir)
                        {
                            int nx=x+d[0];
                            int ny=y+d[1];

                            if(nx>=0 && nx<=m-1 && ny>=0 && ny<=n-1 && grid[nx][ny]==1)
                            {
                                grid[nx][ny]=0;
                                q.push({nx,ny});
                            }
                        }
                    }
        for(int i=0;i<=m-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};