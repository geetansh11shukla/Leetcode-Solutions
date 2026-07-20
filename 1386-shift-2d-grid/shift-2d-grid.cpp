class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        while(k>0)
        {
            int prev=grid[n-1][m-1];
            for(int i=0;i<=n-1;i++)
            {
                for(int j=0;j<=m-1;j++)
                {
                   int temp=grid[i][j];
                   grid[i][j]=prev;
                   prev=temp;
                }
            }
            k--;
        }
        return grid;
    }
};