class Solution {
public:
    bool checkString(string s) {
        stack<int> st;
        int i=0;
        while(s[i]=='a')
        {
            st.push(s[i]);
            i++;
        }
        st.push(s[i]);
        int temp=i+1;
        for(int j=temp;j<=s.size()-1;j++)
        {
            if(s[j]!='b')
            {
                return false;
            }
        }
        return true;
    }
};