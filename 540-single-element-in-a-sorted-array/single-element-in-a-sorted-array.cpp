class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;
        int ans=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            s[nums[i]]++;
        }
        for(auto& i:s)
        {
            if(i.second==1)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};