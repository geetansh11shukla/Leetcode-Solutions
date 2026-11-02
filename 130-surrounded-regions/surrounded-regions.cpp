class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int count=0;

        vector<vector<int>> dir=
        {
            {1,0},{-1,0},{0,1},{0,-1}
        };
        queue<pair<int,int>> q;
        for(int i=0;i<=m-1;i++)
        {
            if(board[i][0]=='O')
            {
                board[i][0]='A';
                q.push({i,0});
            }
            if(board[i][n-1]=='O')
            {
                board[i][n-1]='A';
                q.push({i,n-1});
            }
        }

        for(int i=0;i<=n-1;i++)
        {
            if(board[0][i]=='O')
            {
                board[0][i]='A';
                q.push({0,i});
            }
            if(board[m-1][i]=='O')
            {
                board[m-1][i]='A';
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

                            if(nx>=0 && nx<=m-1 && ny>=0 && ny<=n-1 && board[nx][ny]=='O')
                            {
                                board[nx][ny]='A';
                                q.push({nx,ny});
                            }
                        }
                    }
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        if(board[i][j]=='O')
            board[i][j]='X';
        else if(board[i][j]=='A')
            board[i][j]='O';
    }
}
}
};