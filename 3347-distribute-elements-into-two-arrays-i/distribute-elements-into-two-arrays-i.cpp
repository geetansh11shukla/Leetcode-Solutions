class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        vector<int> ans1;
        vector<int> ans2;
        for(int i=0;i<=n-1;i++)
        {
            if(ans1.empty())
            {
                ans1.push_back(nums[i]);
                l=nums[i];
            }
            else if(ans2.empty())
            {
                ans2.push_back(nums[i]);
                r=nums[i];
            }
            else
            {
                if(l>r)
                {
                    ans1.push_back(nums[i]);
                    l=nums[i];
                }
                else
                {
                    ans2.push_back(nums[i]);
                    r=nums[i];
                }
            }
        }
        vector<int> ans;
        ans.insert(ans.end(), ans1.begin(), ans1.end());
        ans.insert(ans.end(), ans2.begin(), ans2.end());
        return ans;
    }
};