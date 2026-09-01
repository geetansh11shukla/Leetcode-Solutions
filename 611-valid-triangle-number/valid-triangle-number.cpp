class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        if(nums.size()<=2)
        {
            return 0;
        }
        for(int i=0;i<=nums.size()-3;i++)
        {
            for(int j=i+1;j<=nums.size()-2;j++)
            {
                for(int k=j+1;k<=nums.size()-1;k++)
                {
                    if(((long long)nums[i]+nums[j]>nums[k]) && ((long long)nums[i]+nums[k]>nums[j]) && ((long long)nums[j]+nums[k]>nums[i]))
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};