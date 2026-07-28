class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n<=3) return s;
        string ans1="";
        string ans2="";
        if(n%2==0) 
        { 
            int k=n/2;
            {
                sort(s.begin(),s.begin()+k);
                for(int i=0;i<=k-1;i++)
                {
                    ans1.push_back(s[i]);
                    ans2.push_back(s[i]);
                }
                for(int i=ans1.size()-1;i>=0;i--)
                {
                    ans2.push_back(ans1[i]);
                }
            }
        }
        else  
        {
            int k=n/2;
            sort(s.begin(),s.begin()+k);
                for(int i=0;i<=k-1;i++)
                {
                    ans1.push_back(s[i]);
                    ans2.push_back(s[i]);
                }
                ans2.push_back(s[k]);
                for(int i=ans1.size()-1;i>=0;i--)
                {
                    ans2.push_back(ans1[i]);
                }
        }
        return ans2;
    }
};