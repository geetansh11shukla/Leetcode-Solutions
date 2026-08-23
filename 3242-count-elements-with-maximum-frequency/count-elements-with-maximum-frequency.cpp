class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       int n=nums.size();
       int ans1=INT_MIN;
       int count=0;
    //    //int *arr=new int[n];
    //    for(int i=0;i<=n-1;i++)
    //    {
    //     count=0;
    //     for(int j=i;j<=n-1;j++)
    //     {
    //         if(nums[i]==nums[j])
    //         {
    //             count++;
    //         }
    //     }
    //     ans=max(ans,count);
    //     if(count==ans)
    //     {
    //         ans1+=count;
    //     }
    //     else if(count>ans1)
    //     {
    //         ans1=count;
    //     }
    //     }   
    //     return ans1;
    unordered_map<int,int> ans;
    for(int i:nums)
    {
        ans[i]++;
    }
    for(auto &i:ans)
    {
        if(i.second>ans1)
        {
            ans1=i.second;
        }
    }
    for(auto &i:ans)
    {
        if(i.second==ans1)
        {
            count+=ans1;
        }
    }
    return count;
    }
};