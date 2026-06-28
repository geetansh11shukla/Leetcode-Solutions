class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int ans=-1;
        int count=0;
        for(int i=0;i<=n-1;i++)
        {
            count=0;
            for(int j=0;j<=n-1;j++)
            {
                if(i!=j && s[i]==s[j])
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
            ans=i;
            break;
            }
        }
        return ans;
    }
};