class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();

        vector<vector<int>> temp=board;
        vector<vector<int>> dir=
        {
            {1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}
        };
        int count1=0;
        for(int i=0;i<=m-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                count1=0;
                for(auto &d:dir)
                {
                int x=i+d[0];
                int y=j+d[1];
                if(x>=0 && x<=m-1 && y>=0 && y<=n-1)
                {
                    if(board[x][y]==1)
                    {
                        count1++;
                    }
                }
                }
                if(board[i][j]==1)
                {
                    if(count1<2 || count1>3)
                    {
                        temp[i][j]=0;
                    }
                    else
                    {
                       temp[i][j]=1; 
                    }
                }
                    else
                    {
                        if(count1==3)
                        {
                            temp[i][j]=1;
                        }
                        else
                        {
                            temp[i][j]=0;
                        }
                    }
            }
        }
        board=temp;
    }
};