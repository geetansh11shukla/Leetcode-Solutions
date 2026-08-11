class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int ans=nums[0],maxval=0;
        for(int i=1;i<=nums.size()-1;i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                ans+=nums[i];
            }
            else
            {
                break;
            }
        }
        maxval=ans;
        int i=0;
        while(i<=nums.size()-1)
        {
            if(nums[i]==maxval)
            {
                maxval++;
                i=0;
            }
            else if(i==nums.size()-1)
            {
                if(nums[i]!=maxval)
                {
                    break;
                }
            }
            i++;
        }
        return maxval;
    }
};