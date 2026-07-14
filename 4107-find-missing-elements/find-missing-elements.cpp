class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minval=INT_MAX;
        vector<int> ans;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]<minval)
            {
                minval=nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        int i=0;        
        while(i<=nums.size()-1)
        {
            if(minval==nums[i])
            {
                minval++;
                i++;
            }
            else
            {
            ans.push_back(minval);
            minval++;
            }
        }
        return ans;
    }
};