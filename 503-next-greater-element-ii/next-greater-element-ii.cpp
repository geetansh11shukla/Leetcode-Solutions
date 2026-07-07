class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       int n=nums.size();
       stack<int> st;
       vector<int>v (n,-1);
       for(int i=0;i<=2*n-1;i++)
       {
        int num=nums[i%n];
            while(!st.empty() && num>nums[st.top()])
            {
                v[st.top()]=num;
                st.pop();
            }
            if(i<n)
            {
                st.push(i);
            }
       }
       return v;
    }
};