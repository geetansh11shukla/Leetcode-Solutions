class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<=operations.size()-1;i++)
        {
            if(operations[i]=="+")
            {
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                int a=2*st.top();
                st.push(a);
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        }
        while(st.empty()==0)
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};