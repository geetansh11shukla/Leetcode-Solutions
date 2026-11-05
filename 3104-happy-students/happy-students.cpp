class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());  // SORT THE GIVEN ARRAY
        int count=0;
        if(nums[0]>0)
        {
            count++;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            int k=i+1;
            if(nums[i]<k && nums[i+1]>k)
            {
                count++;
            }
        }

        if(nums[nums.size()-1]<nums.size())
        {
            count++;
        }
        return count;
    }
};