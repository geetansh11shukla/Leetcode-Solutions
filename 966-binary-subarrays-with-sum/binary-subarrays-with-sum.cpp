class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int count=0;
        int i=0;
        int sum=0;
        unordered_map<int,int> map;
        map[0]=1;
       for(int j=0;j<=n-1;j++)
       {
            sum+=nums[j];
            if(map.count(sum-goal))
            {
                count+=map[sum-goal];
            }
            map[sum]++;
        }
    return count;
    }
};