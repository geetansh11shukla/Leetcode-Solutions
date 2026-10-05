class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0,ans=0;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]=='(')
            {
            count++;
            }
            else
            {
                if(s[i-1]=='(')
                {
                    ans += pow(2, count - 1);
                }
                count--;
            }
        }
        return ans;
    }
};