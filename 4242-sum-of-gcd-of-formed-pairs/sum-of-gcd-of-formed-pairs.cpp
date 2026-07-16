class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxval=nums[0];
        vector<int> ans;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]>=maxval)
            {
                maxval=nums[i];
            }
            ans.push_back(gcd(nums[i],maxval));
        }
        sort(ans.begin(),ans.end());
        int i=0,j=nums.size()-1;
        long long sum=0;
        while(i<j)
        {
            sum+=gcd(ans[i],ans[j]);
            i++,j--;
        }
        return sum;
    }
};