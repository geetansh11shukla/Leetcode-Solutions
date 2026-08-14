class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> m;
        int j=0,maxval=0;
        for(int i=0;i<=s.size()-1;i++)
        {
            m[s[i]]++;
            while(m[s[i]]>2)
            {
                m[s[j]]--;
                j++;
            }
            maxval=max(maxval,i-j+1);
        }
        return maxval;
    }
};