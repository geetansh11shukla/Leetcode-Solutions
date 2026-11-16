class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> s1(nums.begin(),nums.end());
        int n=s1.size();
        int count=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            set<int> s2;
            for(int j=i;j<=nums.size()-1;j++)
        {
            s2.insert(nums[j]);
            if(s2.size() == s1.size())
            {
                count++;
            }
        }
        }
        return count;
    }
};