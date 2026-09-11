class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans=0;
        unordered_set<int> st;
        for(int i=0;i<=digits.size()-1;i++)
        {
            if(digits[i]==0)
                {
                    continue;
                }
            for(int j=0;j<=digits.size()-1;j++)
            {
                if(j==i)
                    {
                        continue;
                    }
                for(int k=0;k<=digits.size()-1;k++)
                {
                    if(i==k || j==k)
                {
                    continue;
                }
                if(digits[k]%2!=0)
                    {
                        continue;
                    }
                    ans=100*(digits[i])+10*(digits[j])+(digits[k]);
                    st.insert(ans);
                }
            }
        }
        return st.size();
    }
};