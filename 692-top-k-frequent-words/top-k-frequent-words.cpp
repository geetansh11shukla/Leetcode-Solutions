class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        vector<string> ans;
            for(string &c:words)
            {
                freq[c]++;
            }
            vector<pair<string,int>> sorted(freq.begin(),freq.end());

            sort(sorted.begin(),sorted.end(),[](auto &a,auto &b)
            {
                if(a.second==b.second) return a.first<b.first;
                return a.second>b.second;
            });
            for(int i=0;i<=k-1 && i<=sorted.size()-1;i++)
            {
                ans.push_back(sorted[i].first);
            }
            return ans;
    }
};