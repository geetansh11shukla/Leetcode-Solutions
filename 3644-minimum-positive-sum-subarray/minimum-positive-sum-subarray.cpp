class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        for(int i=0;i<=nums.size()-1;i++)
        {
            int sum=0;
            for(int j=i;j<=nums.size()-1;j++)
            {
                int length=j-i+1;
                sum+=nums[j];
                if(length>=l && length<=r && sum>0)
                {
                    ans=min(sum,ans);
                }
                else if(length>r)
                {
                    break;
                }
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};