class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n;
        n=nums.size();
        int i=0,j=i+1,k=j+1,ans=0;
        // while(i<n&&j<n)
        // {
        //     if(nums[i]==nums[j])
        //     {
        //         i++,j++;
        //     }
        //     else
        //     {
        //         ans=nums[j];
        //         break;
        //     }
        // }
        // return ans;
        // int index=0;
        // for(int i=0;i<=n-1;i++)
        // {
        //     nums[index++]=nums[i];
        // }
        // int m=index;
        // int i=0;
        // for(i=index;i<=m-1;i++)
        // {
        //   if(nums[i]==1)
        //   {
        //     return nums[i];
        //   }
        // }
        // return nums[i];
        while(k<n)
        {
            if(nums[i]==nums[j] && nums[j]==nums[k])
            {
                i=i+3;
                j=i+1;
                k=j+1;
                continue;
            }
            else if(nums[i]==nums[j] && nums[j]!=nums[k])
            {
                ans=nums[k];
                break;
            }
            else if(nums[i]!=nums[j] && nums[j]==nums[k])
            {
                ans=nums[i];
                break;
            }
            else if(nums[i]!=nums[j] && nums[i]==nums[k])
            {
                ans=nums[j];
                break;
            }
        }
        if (ans == 0 && i < n)
        {
            ans = nums[i];
        } 
        return ans;
    }
}; 