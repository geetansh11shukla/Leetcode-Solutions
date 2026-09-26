class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> groups;
        
        // Step 1: group indices by value
        for (int i = 0; i < n; i++) {
            groups[nums[i]].push_back(i);
        }
        
        vector<long long> ans(n, 0);
        
        // Step 2: process each group
        for (auto &p : groups) {
            auto &indices = p.second;
            int m = indices.size();
            if (m == 1) continue; // only one occurrence → arr[i]=0
            
            // prefix sums of indices
            vector<long long> prefix(m+1, 0);
            for (int i = 0; i < m; i++) {
                prefix[i+1] = prefix[i] + indices[i];
            }
            
            for (int i = 0; i < m; i++) {
                long long left = 1LL * indices[i] * i - prefix[i];
                long long right = (prefix[m] - prefix[i+1]) - 1LL * indices[i] * (m-i-1);
                ans[indices[i]] = left + right;
            }
        }
        
        return ans;
    }
};
