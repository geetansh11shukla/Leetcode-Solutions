class Solution {
public:
    bool is_palindromic(string a)
    {
        int n=a.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(a[i]!=a[j])
            {
              return false; 
            }
            i++,j--;
        }
        return true; 
    }
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<=s.size()-1;i++)
        {
            string a="";
            for(int j=i;j<=s.size()-1;j++)
            {
                a.push_back(s[j]);
                if(is_palindromic(a))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};