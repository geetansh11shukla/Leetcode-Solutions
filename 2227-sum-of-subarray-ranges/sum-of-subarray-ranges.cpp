class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        if(nums.size()<=1)
        {
            return 0;
        }
        long long sum=0;
        for(int i=0;i<=nums.size()-2;i++)
        {
            long long minval=nums[i],maxval=nums[i];
            for(int j=i+1;j<=nums.size()-1;j++)
            {
                minval=min((long long)nums[j],minval);
                maxval=max((long long)nums[j],maxval);
                sum+=(long long)maxval-minval;
            }
        }
        return sum;
    }
};