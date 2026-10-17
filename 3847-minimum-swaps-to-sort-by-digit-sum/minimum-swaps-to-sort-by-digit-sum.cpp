class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<pair<int,int>> st;
        for(int i=0;i<=nums.size()-1;i++)
        {
            int temp=nums[i];
            int sum=0;
            while(temp>0)
            {
                int rem=temp%10;
                sum+=rem;
                temp/=10;
            }
            st.push_back({sum,nums[i]});
        }
        sort(st.begin(),st.end());

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != st[i].second) {
                swaps++;

                int idx = mp[st[i].second];

                mp[nums[i]] = idx;
                mp[st[i].second] = i;

                swap(nums[i], nums[idx]);
            }
        }

        return swaps;
    }
};