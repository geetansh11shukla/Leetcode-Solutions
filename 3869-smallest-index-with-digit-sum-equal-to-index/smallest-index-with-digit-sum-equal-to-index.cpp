class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            sum=0;
            if(nums[i]<10)
            {
                sum+=nums[i];
                if(sum==i)
                {
                    return i;
                }
            }
            else
            {
                while(nums[i]>0)
                {
                    int rem=nums[i]%10;
                    sum+=rem;
                    nums[i]=nums[i]/10;
                }
                if(sum==i)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};