class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        priority_queue<pair<int,int>> dq;
        for(int i=0;i<=k-1;i++)
        {
            dq.push({nums[i],i});
        }
        ans.push_back(dq.top().first);
        for(int i=k;i<=n-1;i++)
        {
            dq.push({nums[i],i});
        while(i-k>=dq.top().second)
        {
           dq.pop();
        }
        ans.push_back(dq.top().first);
        }
        return ans;
    }
};