class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int count=0,ans=0;
        set<vector<int>> st;
        for(int i=0;i<=nums.size()-1;i++)
        {
            vector<int> a;
            count=0;
            for(int j=i;j<=nums.size()-1;j++)
            {
                a.push_back(nums[j]);
                    if(nums[j]%p==0)
                    {
                        count++;
                        // ans++;
                    }
                    if(count<=k)
                    {
                        st.insert(a);
                    }
                    else
                    {
                        break;
                    }
            }
        }
        return st.size();
    }
};