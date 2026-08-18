class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int ans=-1;
         for(int i=0;i<=nums.size()-k;i++)
         {
            unordered_set<int> n;
            for(int j=i;j<=i+k-1;j++)
            {
                n.insert(nums[j]);
            }
            for(int p:n)
            {
                m[p]++;
            }
         }
         for(auto &i:m)
         {
            if(i.second==1)
            {
                ans=max(ans,i.first);
            }
         }
         return ans;
    }
};