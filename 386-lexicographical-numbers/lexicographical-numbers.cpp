class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> s;
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end());
        for(string &c:s)
        {
            ans.push_back(stoi(c));
        }
        return ans;
    }
};