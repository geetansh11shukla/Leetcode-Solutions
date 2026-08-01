class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<=s.length()-1;i++)
        {
            // if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            if(isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));
            }
        }
        int i=0,j=ans.size()-1;
        while(i<j)
        {
            if(ans[i]!=ans[j])
            {
                return false;
            }
            i++,j--;
        }
        return true;
    }
};