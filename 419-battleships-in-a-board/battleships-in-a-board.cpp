class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int count=0;
        vector<vector<int>> dir =
        {
            {1,0},{-1,0},{0,1},{0,-1}
        };

        for(int i=0;i<=m-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                if(board[i][j]=='X')
                {
                    count++;

                    queue<pair<int,int>> q;
                    q.push({i,j});
                    board[i][j]='.';

                    while(!q.empty())
                    {
                        auto[x,y]=q.front();
                        q.pop();

                        for(auto d:dir)
                        {
                            int nx=x+d[0];
                            int ny=y+d[1];

                            if(nx>=0 && nx<m && ny>=0 && ny<n && board[nx][ny]=='X')
                            {
                                board[nx][ny]='.';
                                q.push({nx,ny});
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};