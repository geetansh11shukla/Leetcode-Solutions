class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int mid=n/2;
        int mid_element=nums[mid];

        for(int i=0;i<=mid-1;i++)
        {
            sum+=nums[mid]-nums[i];
        }
        for(int i=mid+1;i<=n-1;i++)
        {
            sum+=nums[i]-nums[mid];
        }
        return sum;
    }
};