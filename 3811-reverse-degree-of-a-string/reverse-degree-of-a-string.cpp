class Solution {
public:
    int reverseDegree(string s) {
        int product=0,ans=0;
        for(int i=0;i<=s.size()-1;i++)
        {
           if(s[i]>='a'&&s[i]<='z')
           {
            product=26-(s[i]-97);
            ans+=((i+1)*product);
           }
        }
        return ans;
    }
};