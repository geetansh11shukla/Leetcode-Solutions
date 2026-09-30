class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int temp=k;
        int count=0,ans=0,left=0;
        for(int i=0;i<=n-1;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                if(temp>0)
                {
                    count++;
                    temp--;
                }
                else
                {   
                   while(nums[left]==1)
                   {
                    count--;
                    left++;
                   }
                   left++;
                }
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};