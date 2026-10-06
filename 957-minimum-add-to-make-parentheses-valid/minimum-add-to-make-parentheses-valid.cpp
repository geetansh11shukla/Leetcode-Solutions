class Solution {
public:
    int minAddToMakeValid(string s) {
        // int count1=0,count2=0,ans=0;
        // for(int i=0;i<=s.size()-1;i++)
        // {
        //     if(s[i]=='(')
        //     {
        //         count1++;
        //     }
        //     else
        //     {
        //         count2++;
        //     }
        // }
        // if(count1>count2)
        // {
        //     ans=count1-count2;
        // }
        // else if(count1==count2)
        // {
        //     ans=0;
        // }
        // else
        // {
        //     ans=count2-count1;
        // }
        // return ans;

        stack<int> st;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        int a=st.size();
        return a;
    }
};