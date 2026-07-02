class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        for(char c:sentence)
        {
            st.insert(c);
        }
        if(st.size()==26)
        {
            return true;
        }
        return false;
    }
};