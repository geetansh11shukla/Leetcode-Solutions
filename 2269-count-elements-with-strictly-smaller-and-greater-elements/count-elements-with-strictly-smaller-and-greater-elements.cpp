class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0,minval,maxval;
        for(int i=0;i<=nums.size()-1;i++)
        {
            minval=INT_MAX;
            maxval=INT_MIN;
           for(int j=0;j<=nums.size()-1;j++)
           {
            if(i==j)
            {
                continue;
            }
            else
            {
                    maxval=max(maxval,nums[j]);
                    minval=min(minval,nums[j]);
            }
           }
           if(nums[i]>minval && nums[i]<maxval)
           {
            count++;
           }
        }
        return count;
    }
};