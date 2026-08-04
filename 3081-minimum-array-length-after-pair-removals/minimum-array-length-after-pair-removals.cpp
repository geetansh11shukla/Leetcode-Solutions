class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int i=0,j=nums.size()/2,count=0;
        int n=nums.size();
        while(i<n/2 && j<n)
        {
            if(nums[i]<nums[j])
            {
                count+=2;
                i++,j++;
            }
            else
            {
                j++;
            }
        }
        return nums.size()-count;
    }
};