class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<int> ans;
        if(!next_permutation(nums.begin(),nums.end()))
        {
            sort(nums.begin(),nums.end());
        }
        
    }
};