class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> v;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                v.insert(nums[i]);
                // nums.erase(remove(nums.begin(), nums.end(), nums[i]), nums.end());
            }
        }
        return vector<int>(v.begin(),v.end());
    }
};