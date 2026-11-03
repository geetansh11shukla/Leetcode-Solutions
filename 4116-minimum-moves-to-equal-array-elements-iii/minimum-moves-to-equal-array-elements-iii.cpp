class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int max_element=nums[nums.size()-1];
        for(int i=0;i<=nums.size()-1;i++)
        {
            ans+=max_element-nums[i];
        }
        return ans;
    }
};