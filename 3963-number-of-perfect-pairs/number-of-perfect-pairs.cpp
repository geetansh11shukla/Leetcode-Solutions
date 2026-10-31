class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        long long ans=0;
        sort(nums.begin(),nums.end(),[](int a, int b) {
            return abs(a) < abs(b);
        });
        int j=1;
        for(int i=0;i<=nums.size()-1;i++)
        {
            while(j<=nums.size()-1 && abs(nums[j]) <= 2*abs(nums[i]))
            {
            j++;
            }
            ans+=j - i - 1;
            if(j==i+1)
            {
                j++;
            }
        }
        return ans;
    }
};