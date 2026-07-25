class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans1=1,ans2=1,ansval=1,count1=1,count2=1,i=0;
        while(i<nums.size()-1)
        {
                if(nums[i]<nums[i+1])
                {
                    count2=1;
                    count1++;
                    ans1=max(ans1,count1);
                }
                else if(nums[i]>nums[i+1])
                {
                    count1=1;
                    count2++;
                    ans2=max(ans2,count2);
                }
                else
                {
                    count1=1,count2=1;
                }
                i++;
        }
        ansval = max(ans1, ans2);
        return ansval;
    }
};