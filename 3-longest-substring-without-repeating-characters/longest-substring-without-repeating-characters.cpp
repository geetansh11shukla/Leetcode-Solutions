class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<1)
        {
            return 0;
        }
        int ans=0,count=0;
        unordered_set<char> st;
        // st.insert(s[0]);
        for(int i=0;i<=s.size()-1;i++)
        {
            while(st.find(s[i]) != st.end())
            {
                st.erase(s[count]);
                count++;
            }
            st.insert(s[i]);
            ans=max(ans,i-count+1);
        }
        return ans;
    }
};