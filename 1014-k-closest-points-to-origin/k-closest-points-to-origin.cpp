class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> q;
        for(auto& i:points)
        {
            int x=i[0];
            int y=i[1];
            int distance=x*x+y*y;
            q.push({distance,{x,y}});
            if(q.size()>k)
            {
                q.pop();
            }
        }
        vector<vector<int>> ans;
        while(!q.empty())
        {
            auto p=q.top();
            q.pop();
            ans.push_back({p.second.first,p.second.second});
        }
        return ans;
    }
};