class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int count=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            set<int> a;
            a.insert(nums[i]);
            count+=a.size()*a.size();
            for(int j=i+1;j<=nums.size()-1;j++)
        {
            a.insert(nums[j]);
            count+=a.size()*a.size();
        }
        }
        return count;
    }
};