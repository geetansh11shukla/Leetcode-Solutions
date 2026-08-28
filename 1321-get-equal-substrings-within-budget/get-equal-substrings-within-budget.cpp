class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> ascii;
        for(int i=0;i<=s.size()-1;i++)
        {
            ascii.push_back(abs(int(s[i])-int(t[i])));
        }
        int left=0,right=0;
        int ans=0,maxCount=INT_MIN,count=0;
        for(right=0;right<=ascii.size()-1;right++)
        {
            ans+=ascii[right];
            if(ans>maxCost)
            {
                ans-=ascii[left];
                left++;
            }
            maxCount=max(maxCount,right-left+1);
        }
        return maxCount;
    }
};