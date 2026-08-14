class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
         unordered_map<int,int> m;
        int j=0,maxval=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            m[nums[i]]++;
            while(m[nums[i]]>k)
            {
                m[nums[j]]--;
                j++;
            }
            maxval=max(maxval,i-j+1);
        }
        return maxval;
    }
};