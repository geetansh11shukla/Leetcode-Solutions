class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int n=nums.size(),ans1=0,ans2=0,ans3=0;
        // set<vector<int>> st;
        // sort(nums.begin(),nums.end());
        //   for(int i=0;i<=nums.size()-1;i++)
        //   {
        //     set<int> hashset;
        //     for(int j=i+1;j<=nums.size()-1;j++)
        //   {
        //     int third=-(nums[i]+nums[j]);
        //     if(hashset.find(third)!=hashset.end())
        //     {
        //       vector<int> b={nums[i],nums[j],third};
        //        sort(b.begin(),b.end());
        //        st.insert(b);
        //     }
        //     hashset.insert(nums[j]);
        //   }
        //   }
        //   vector<vector<int>> a(st.begin(),st.end());
        //    return a;

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    vector<int> a={nums[i],nums[j],nums[k]};
                    ans.push_back(a);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    {
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1])
                    {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};