class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int count1=0,count2=0;
        int ans=0;
        for(int i=0;i<=n-1;i++)
        {
          if(s[i]=='(')
          {
            count1++;
          }
          else
          {
            count2++;
          }
        if(count1==count2)
        {
          ans=max(ans,2*count2);
        }
        else if(count2>count1)
        {
          count1=count2=0;
        }
        }
        count1=count2=0;
        for(int i=n-1;i>=0;i--)
        {
          if(s[i]=='(')
          {
            count1++;
          }
          else
          {
            count2++;
          }
        if(count1==count2)
        {
          ans=max(ans,2*count1);
        }
        else if(count1>count2)
        {
          count1=count2=0;
        }
        }
        return ans;
    }
};