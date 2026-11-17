class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int left=0,max_freq=0,ans=0;
        for(int i=0;i<=s.size()-1;i++)
        {
            freq[s[i]]++;
            max_freq=max(max_freq,freq[s[i]]);
            // if(s.size()-max_freq<=k)
            // {
                // ans=max(ans,i-left+1);
            // }
            while((i-left+1)-max_freq>k)
            {
                freq[s[left]]--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};