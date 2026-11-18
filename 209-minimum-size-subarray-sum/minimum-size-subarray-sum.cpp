class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,count=INT_MAX,left=0;
        // sort(nums.begin(),nums.end());
        bool found=false;
        for(int i=0;i<=nums.size()-1;i++)
        {
            sum+=nums[i];
            // count++;
                while(sum>=target)
                {
                count=min(count,i-left+1);
                sum-=nums[left];
                left++;
                found=true;
                }
        }
        if(found==true)
        {
            return count;
        }
        else
        {
        return 0;
        }
    }
};