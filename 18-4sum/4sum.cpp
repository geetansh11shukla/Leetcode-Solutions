class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<=n-3;i++)
        {
         for(int j=i+1;j<=n-2;j++)
        {
            for(int k=j+1;k<=n-1;k++)
        {
            long long rem=(long long)target-nums[i]-nums[j]-nums[k];
            if(binary_search(nums.begin()+k+1, nums.end(), rem))
            {
                s.insert({nums[i],nums[j],nums[k],int(rem)});
            }
        }
        }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};