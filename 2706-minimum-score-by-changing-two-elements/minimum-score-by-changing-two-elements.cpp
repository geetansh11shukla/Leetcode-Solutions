class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX,ans5=INT_MAX;
        if(nums.size()<=3)
        {
            return 0;
        }
        else
        {
            ans1=nums[nums.size()-1]-nums[2];
            ans2=nums[nums.size()-2]-nums[1];
            ans3=nums[nums.size()-3]-nums[0];
        }
        ans5=min({ans1,ans2,ans3});
        return ans5;
    }
};