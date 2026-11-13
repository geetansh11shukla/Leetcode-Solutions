class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n,false);
        queue<int> q;
        visited[0]=true;
        q.push(0);

        while(!q.empty())
        {
           int next_value=q.front();
           q.pop();
           for(int i:rooms[next_value])
           {
           if(!visited[i])
           {
            visited[i]=true;
            q.push(i);
           }
           }
        }

        for(int i=0;i<=n-1;i++)
        {
            if(!visited[i])
            {
                return false;
            }
        }
        return true;
    }
};