class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         // int minelement=INT_MAX;
        int maxelement=*max_element(nums.begin(),nums.end());
        // for(int i=0;i<=nums.size()-1;i++)
        // {
        //     minelement=INT_MAX;
        //     for(int j=i;j<=nums.size()-1;j++)
        // {
        //     // if(nums[j]<minelement)
        //     // {
        //     //     minelement=nums[j];
        //     // }
        //     minelement=min(minelement,nums[j]);
        // }
        int n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<=nums.size()-1;i++)
        {
            prefix[i]=max(prefix[i-1],nums[i]);
        }
        vector<int> suffix(n);
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        for(int i=0;i<=suffix.size()-1;i++)
        {
        if((prefix[i]-suffix[i])<=k)
        {
            return i;
        }
        }
        return -1;
    }
};