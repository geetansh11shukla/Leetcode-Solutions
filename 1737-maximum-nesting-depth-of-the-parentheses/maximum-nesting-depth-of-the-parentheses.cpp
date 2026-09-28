class Solution {
public:
    int maxDepth(string s) {
        // stack<char> ans;
        int count=0,ansval=0;
        for(int i:s)
        {
            if(i=='(')
            {
                count++;
            }
            else if(i==')')
            {
                count--;
            }
            ansval=max(ansval,count);
        }
        return ansval;
    }
};