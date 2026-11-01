class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
            sort(nums.begin(),nums.end()); // SORT THE GIVEN ARRAY
            int mn = *min_element(nums.begin(), nums.end());
            // int max_element=nums[nums.size()-1];
            // if(nums[0]==max_element)
            // {
            //     return count;
            // }
            // for(int i=0;i<=nums.size()-2;i++)
            // {
            //     nums[i]++;
            // }
            // count++;
            for(int i=0;i<=nums.size()-1;i++)
            {
                count+=(nums[i]-mn);
            }
        return count;
    }
};