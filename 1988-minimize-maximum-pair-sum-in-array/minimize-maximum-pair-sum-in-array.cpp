class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            ans=max(ans,nums[i]+nums[j]);
            i++,j--;
        }
        return ans;
    }
};