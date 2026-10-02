class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        // int temp=k;
        int count=0,ans=0,left=0;
        for(int i=0;i<=n-1;i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
                while(count>1)
                {
                    if(nums[left]==0)
                   {
                    count--;
                   }
                   left++;
                }
            ans=max(ans,i-left);
        }
        return ans;
    }
};