class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<=nums.size()-1;i++)
        {
            s.insert(nums[i]);
        }
        // sort(s.begin(),s.end());
        if(s.size()<3)
        {
            return *s.rbegin();
        }
        auto i=s.rbegin();
        ++i;
        ++i;
        return *i;
    }
};