class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return nums[n-k];
        priority_queue<int ,vector<int>,greater<int>> q;
        for(int i:nums)
        {
            q.push(i);
            if(q.size()>k)
            {
                q.pop();
                // return q.top();
            }
        }
        return q.top();
    }
};