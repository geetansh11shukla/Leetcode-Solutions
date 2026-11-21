class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> freq;
        int left=0,right=0,start=0;
        int min_value=INT_MAX,count=0;
        for(int i=0;i<=t.size()-1;i++)
        {
            freq[t[i]]++;
        }
        while(right<s.size())
        {
            if(freq[s[right]]>0)
            {
                count+=1;
            }
            freq[s[right]]--;
            while(count==t.size())
            {
                // min_value=min(min_value,right-left+1);
                if(right - left + 1 < min_value) {
                    min_value = right - left + 1;
                    start = left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0)
                {
                    count=count-1;
                }
                left++;
            }
            right++;
        }
        return min_value == INT_MAX ? "" : s.substr(start, min_value);
    }
};