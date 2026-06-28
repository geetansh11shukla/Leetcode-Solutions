class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        // int total_sum=0;
        long long sum=0;
        for(int i=0;i<=k-1;i++)
        {
            if(mul>0)
            {
            sum+=1LL*mul*nums[i];
            }
            else
            {
            sum+=nums[i];
            }
            mul--;
        }
        return sum;
    }
};