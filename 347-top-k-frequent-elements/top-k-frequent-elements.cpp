class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans=nums;
        unordered_map<int,int> freq;
        vector<int> b;
        for(int i=0;i<=ans.size()-1;i++)
        {
            freq[ans[i]]++;
        }
        vector<pair<int,int>> sorted(freq.begin(), freq.end());
        sort(sorted.begin(), sorted.end(), [](auto &a,auto &b) {
            return a.second>b.second;
            });
         for(int i=0; i<=k-1 && i<=sorted.size()-1;i++)
        {
            b.push_back(sorted[i].first);
        }
    return b;
    }
};