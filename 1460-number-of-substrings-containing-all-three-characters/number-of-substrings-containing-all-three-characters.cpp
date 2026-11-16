class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,ans=0;
        unordered_map<char,int> mp;
        while(right<s.size())
        {
            mp[s[right]]++;
            while(mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0)
            {
                mp[s[left]]--;
                left++;
                ans+=s.size()-right;
            }
            // if(mp[s[right]]=3)
            // {
            //     ans++;
            // }
            right++;
        }
        return ans;
    }
};