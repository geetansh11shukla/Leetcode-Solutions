class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nsl(n);
        vector<int> nsr(n);
        stack<int> st;
        nsl[0]=-1;
        st.push(0);
        for(int i=0;i<=heights.size()-1;i++)
        {
            int curr=heights[i];
            while(!st.empty() && curr<=heights[st.top()])
            {
                st.pop();
            }
            if(st.empty())
            {
                nsl[i]=-1;
            }
            else
            {
                nsl[i]=st.top();
            }
            st.push(i);
        }
       
         while(!st.empty())
         {
            st.pop();
         }


         st.push(n-1);
         nsr[n-1]=n;
        for(int i=n-2;i>=0;i--)
        {
            int curr=heights[i];
            while(!st.empty() && curr<=heights[st.top()])
            {
                st.pop();
            }
            if(st.empty())
            {
                nsr[i]=n;
            }
            else
            {
                nsr[i]=st.top();
            }
            st.push(i);
        }

        int max_area=0;
        for(int i=0;i<=n-1;i++)
        {
            int ht=heights[i];
            int width=nsr[i]-nsl[i]-1;
            int area=ht*width;
            max_area=max(area,max_area);
        }
        return max_area;
    }
};