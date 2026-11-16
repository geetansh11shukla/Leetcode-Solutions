class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int left=0,right=0,count=0;
        unordered_map<int,int> mp;
        while(right<s.size())
        {
            mp[s[right]]++;
             while(mp[s[right]]>=k)
            {
                mp[s[left]]--;
                left++;
            }
            right++;
            count+=left;
        }
        return count;
    }
};